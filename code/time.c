#include "time.h"

void Timer0Init(void) //1����@12.000MHz
{
	TH0 = 0xFF;
	TL0 = 0xFF;
	TMOD = 0x04;
	ET0 = 1;
	TR0 = 1;
	EA = 1;
}
void Timer1Init(void) //1����@12.000MHz
{
	AUXR &= 0xBF; //��ʱ��ʱ��12Tģʽ
	TMOD &= 0x0F; //���ö�ʱ��ģʽ
	TL1 = 0x78;	  //���ö�ʱ��ֵ
	TH1 = 0xEC;	  //���ö�ʱ��ֵ
	TF1 = 0;	  //���TF1��־
	TR1 = 1;	  //��ʱ��1��ʼ��ʱ
	ET1 = 1;
}
