#include<lpc214x.h>
void delay(unsigned int t);
int main(void)
{
	IO0DIR = (1<<1);   //Port 0  pin no 1 are acting as output pin
	while(1)
	{
		IO0SET = (1<<1);       //Port 0 pin no 1 are high now 
		delay(300);              // delay of .3 sec
		IO0CLR = (1<<1);      //Port 0 pin no 1 are low now 
		delay(300);              // delay of .3 sec
	}
}
void delay(unsigned int t)
{
	T0CTCR = 0x0;        //Timer mode
	T0TCR = 0x02;        //Timer reset
	T0PR = 59999;        //Set the prescaler register value
	T0TCR = 0x02;        //Timer reset
	T0TCR = 0x01;        //Timer on  
	while(T0TC<t);       //Wait untill TC become equal to desire delay   
	T0TCR = 0x00;        //Timer off
	T0TC = 0;
}
	
