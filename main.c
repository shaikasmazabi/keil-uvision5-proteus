#include<reg51.h>
sbit led=P2^1;
void delay(x)
{
	int i,j;
	for(i=0;i<1275;i++)
	for(j=0;j<x;j++);
}

void main()
{
	int k;
	for(k=0;k<5;k++)
	{
		led=1;
		delay(50);
		led=0;
		delay(50);
	}
	led=0;
}
 