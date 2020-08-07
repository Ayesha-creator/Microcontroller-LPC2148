#include<lpc214x.h>
void delay_ms(unsigned int count)    /* Function for delay in milliseconds */
{
unsigned int j=0,i=0;
for(j=0;j<count;j++)
 {
	for(i=0;i<60000;i++);             /* loop to generate 1 millisecond delay */  
 }
}
int main()
{ unsigned int l;
	IO1DIR= 0xFFFFFFFF;               /*Set P1 pins as output */
	while(1)
	{ for(l=1<<16;l<1<<19;l<<=1) 
		{IO1SET = l;                    /*Set coresponding l pin of P1 as high */ 
		delay_ms(100);                  /* Generate delay of 100ms */ 
		IO1CLR = l;                     /*Set coresponding l pin of P1 as low */ 
		delay_ms(100);                  /* Generate delay of 100ms */ 
	}
}
	}