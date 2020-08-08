#include<lpc214x.h>
void delay();
void main()
{
IO0DIR = IO0DIR | 0xFFFFFFFF;
IO1DIR = 0x0;
while(1)
{
if((IO1PIN & (1<<16)) == 0 )
IOSET0 = IOSET0 | 0xFFFFFFFF;
else
IOCLR0 = IOCLR0 | 0xFFFFFFFF;
}
}
void delay()
{
unsigned int i;
for(i=0;i<6000;i++);
}