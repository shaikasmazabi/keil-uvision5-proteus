#include<reg51.h>
sbit in1=P2^0;
sbit in2=P2^1;

void delay(int x)
{
 int i,j;
 for(i=0;i<1275;i++)
 for(j=0;j<x;j++);
 }
 
 int main()
 {
  while(1)
  {
  in1=0;
  in2=0;
  delay(50);
  in1=1;
  in2=0;
  delay(50);
  }
 }