#include<lpc214x.h>
#include<stdint.h>



int main(void)
{
	IO1DIR = IO1DIR & ~(1<<16);   /* Set P1.16 as input   */
	IO0DIR = IO0DIR | (1<<10);    /* Set P1.10 as output  */
	while(1)
	{
		if(!(IO0PIN & (1<<16)))      /*Execute for True for low on P1.16 */
		{
			IO0CLR = IO0CLR | (1<<10);  /*P0.30 LOW so LED turned On */			
		}
		else
		{
			IO0SET = IO0SET | (1<<10);    /*P0.30 High so LED turned off */
					}
	}
}