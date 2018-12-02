#include "reg51.h"
#include "intrins.h"

/////////////////PWM////////////////
sfr     P_SW2       =   0xba;
sfr     PWMCFG      =   0xf1;
sfr     PWMIF       =   0xf6;
sfr     PWMFDCR     =   0xf7;
sfr     PWMCR       =   0xfe;
//system time clock div
#define CLKDIV          (*(unsigned char volatile xdata *)0xfe01)
#define PWMC            (*(unsigned int volatile xdata *)0xfff0)
#define PWMCKS          (*(unsigned char volatile xdata *)0xfff2)
#define TADCP           (*(unsigned int volatile xdata *)0xfff3)
#define PWM0T1          (*(unsigned int volatile xdata *)0xff00)
#define PWM0T2          (*(unsigned int volatile xdata *)0xff02)
#define PWM0CR          (*(unsigned char volatile xdata *)0xff04)
/////////////AD/////////////////////////////
sfr     ADC_CONTR   =   0xbc;
sfr     ADC_RES     =   0xbd;
sfr     ADC_RESL    =   0xbe;
sfr     ADCCFG      =   0xde;

sfr     P1M0        =   0x92;
sfr     P1M1        =   0x91;
/////////////Serial/////////////////////////////
#define FOSC            24000000/2
#define BRT             (65536 - FOSC / 115200 / 4)

sfr     AUXR        =   0x8e;
sfr     T2H         =   0xd6;
sfr     T2L         =   0xd7;

bit busy;
char wptr;
char rptr;
char buffer[16];

void UartIsr() interrupt 4 using 1
{
    if (TI)
    {
        TI = 0;
        busy = 0;
    }
    if (RI)
    {
        RI = 0;
        buffer[wptr++] = SBUF;
        wptr &= 0x0f;
    }
}

void UartInit()
{
    SCON = 0x50;
    T2L = BRT;
    T2H = BRT >> 8;
    AUXR = 0x15;
    wptr = 0x00;
    rptr = 0x00;
    busy = 0;
}

void UartSend(char  dat)
{
    while (busy);
    busy = 1;
    SBUF = dat;
}

void UartSendStr(char *p)
{
    while (*p)
    {
        UartSend(*p++);
    }
}

void PWM(int value)
{
    //////////////////////////PWM////////////
	  P_SW2 = 0x80;
	  CLKDIV=0x02;
    PWMCKS = 0x0F;                              // PWMʱ��Ϊϵͳʱ��
    PWMC = 0x7fff;                              //����PWM����Ϊ32767H��PWMʱ��
    PWM0T1= 0x0000;                             //�ڼ���ֵΪ000H�ط�����͵�ƽ
    PWM0T2= 0x7000;                             //�ڼ���ֵΪPWM0T2�ط�����ߵ�ƽ,��ֵԽС�ߵ�ƽʱ��Խ��
    PWM0CR= 0x80;                               //ʹ��PWM0���
    P_SW2 = 0x00;

    PWMCR = 0x80;                               //����PWMģ��
}

void main()
{
    P1M0 = 0x00;                                //����P1.0ΪADC��
    P1M1 = 0x01;
    ADCCFG = 0x07;                              //����ADCʱ��Ϊϵͳʱ��/2/16/16
    ADC_CONTR = 0x80;                           //ʹ��ADCģ��

	  UartInit();
    ES = 1;
    EA = 1;
    PWM(1);
	 UartSendStr("hello");
    while (1)
    {
			  int res=0;
        ADC_CONTR |= 0x40;                      //����ADת��
        _nop_();
        _nop_();
        while (!(ADC_CONTR & 0x20));            //��ѯADC��ɱ�־
        ADC_CONTR &= ~0x20;                     //����ɱ�־
			  res = ADC_RES;
        res <<= 8;
        res |= ADC_RESL;
			  UartSend(ADC_RES);
			
			 
			 UartSend(ADC_RESL);
			  //UartSendStr("hello");
			  //UartSendStr((int)res+"");
      
    }
}

