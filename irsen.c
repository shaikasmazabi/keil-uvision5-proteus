#include<reg51.h>
sbit ir=P2^1;
sbit led=P2^2;
void main()
{
while(1)
{
if(ir==1)
{
led=1;
}
else
{
led=0;
}
}
}
