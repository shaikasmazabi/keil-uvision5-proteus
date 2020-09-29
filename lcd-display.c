 #include<reg51.h>
#define lcd P3
sbit rs=P1^1;
sbit en=P1^2;

void delay(unsigned int x)
{
	int i,j;
	for(i=0;i<1275;i++)
	for(j=0;j<x;j++);
}
 void lcd_cmd(unsigned char z)
 {
 rs=0;
 lcd=z;
 en=1;
 delay(5);
 en=0;
}

void lcd_data(unsigned char y)
{
rs=1;
lcd=y;
en=1;
delay(5);
en=0;
}

void lcd_init()
{
lcd_cmd(0x38);
lcd_cmd(0x06);
lcd_cmd(0x0e);
lcd_cmd(0x01);
}

void lcd_str(unsigned char *s)
{
while(*s)
{
lcd_data(*s++);
}
}
int main()
{
while(1)
{
lcd_init();
lcd_cmd(0x80);
lcd_str("WELCOME 2021");
lcd_cmd(0xc0);
lcd_str("ASMA");
delay(100);
}
}

	