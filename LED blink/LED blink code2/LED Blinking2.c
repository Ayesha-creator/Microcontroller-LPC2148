#include<lpc214x.h>
void delay_ms(unsigned int count)      /* Function for delay in milliseconds */
{
unsigned int j=0,i=0;
for(j=0;j<count;j++)
 {
	for(i=0;i<60000;i++);               /* loop to generate 1 millisecond delay */
 }
}
int main()
{
	PINSEL2 =0x000000;                  /*Set P1 pins for GPIO  */
  IO1DIR = 0xFFFFFFFF;                /*Set P1 pins as output */
while(1)
	{
     IO1SET = 0xFFFFFFFF;             /*All pins of P1 are set high */
     delay_ms(100);                   /* Generate delay of 100ms */ 
     IO1CLR = 0xFFFFFFFF;             /*All pins of P1 are set low */
     delay_ms(100);                   /* Generate delay of 100ms */  
  }
}