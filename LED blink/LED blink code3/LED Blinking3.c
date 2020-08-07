#include<lpc214x.h>
void delay_ms(unsigned int count)    /* Function for delay in milliseconds */
{
unsigned int j=0,i=0;
for(j=0;j<count;j++)                 /* loop to generate 1 millisecond delay */
 {
	for(i=0;i<60000;i++);
 }
}
int main()
{
	IO1DIR = (1<<16);                  /*Set P1.16 pin as output */
	while(1)
	{
		IO1SET = (1<<16);               /*Set P1.16 as high */   
		delay_ms(100);                  /* Generate delay of 100ms */ 
		IO1CLR = (1<<16);               /*Set P1.16 as low */      
		delay_ms(100);                  /* Generate delay of 100ms */ 
	}
}
		