#include <lpc214x.h>
#include <stdint.h>

void delay_ms(uint16_t j)
{
    uint16_t x,i;
	for(i=0;i<j;i++)
	{
    for(x=0; x<60000; x++);         // loop to generate 1 milisecond delay 
	}
}


int main (void)
{
	uint32_t value;
	value = 1;
	VPBDIV		= 0x00000002;          //PCLK	is one half of the CCLK
	PINSEL0 = PINSEL0 | 0x00000008;  // Configure P0.1 as PWM3 
	
// For single edge controlled PWM3
	
	PWMTCR = 0x02; 	                 // Reset and disable counter for PWM
	PWMPR = 0x1D; 	                 // Prescale value for 1usec, Pclk=30MHz
	PWMMR0 = 1000;    	             // Time period of PWM wave, 1msec 
	PWMMR3 = value;	                 // Ton of PWM wave 
	PWMMCR = 0x00000203;	           // Reset and interrupt on MR0 match, interrupt on MR3 match 
	PWMLER = 0x09;	                 // Latch enable for PWM3 and PWM0 
	PWMPCR = 0x0800;	               // Enable PWM3 and PWM0, single edge controlled PWM on PWM3 
	PWMTCR = 0x09;	                 // Enable PWM and counter 

	while (1)
	{
		while (value != 999)            //check if led has reach max intensity 
		{
			PWMMR3 = value;               //Match regiter has assign the value
			PWMLER = 0x08;                //Start condition  
			delay_ms(5);                  //delay of 5 miliseconds
			value++;                      //intensity of led glow increaes  
		}
		while (value != 1)              //check if led has reach min intensity 
		{
			PWMMR3 = value;               //Match register has assign the value
			PWMLER = 0x08;                //start condition 
			delay_ms(5);                  //delay of 5 miliseconds
			value--;                      //intensity of led glow decreases
		}	
	}
}
