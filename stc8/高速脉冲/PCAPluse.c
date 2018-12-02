#include "reg51.h"
#include "intrins.h"


#define T38K4HZ         (24000000L /2/300000)

sfr     CCON        =   0xd8;
sbit    CF          =   CCON^7;
sbit    CR          =   CCON^6;
sbit    CCF3        =   CCON^3;
sbit    CCF2        =   CCON^2;
sbit    CCF1        =   CCON^1;
sbit    CCF0        =   CCON^0;
sfr     CMOD        =   0xd9;
sfr     CL          =   0xe9;
sfr     CH          =   0xf9;
sfr     CCAPM0      =   0xda;
sfr     CCAP0L      =   0xea;
sfr     CCAP0H      =   0xfa;
sfr     PCA_PWM0    =   0xf2;
sfr     CCAPM1      =   0xdb;
sfr     CCAP1L      =   0xeb;
sfr     CCAP1H      =   0xfb;
sfr     PCA_PWM1    =   0xf3;
sfr     CCAPM2      =   0xdc;
sfr     CCAP2L      =   0xec;
sfr     CCAP2H      =   0xfc;
sfr     PCA_PWM2    =   0xf4;
sfr     CCAPM3      =   0xdd;
sfr     CCAP3L      =   0xed;
sfr     CCAP3H      =   0xfd;
sfr     PCA_PWM3    =   0xf5;

unsigned int value;

void PCA_Isr() interrupt 7 using 1
{
    CCF0 = 0;
    CCAP0L = value;
    CCAP0H = value >> 8;
    value += T38K4HZ;
}

void main()
{
    CCON = 0x00;
    CMOD = 0x08;                                //PCA时钟为系统时钟
    CL = 0x00;
    CH = 0x00;
    CCAPM0 = 0x4d;                              //PCA模块0为16位定时器模式并使能脉冲输出
    value = T38K4HZ;
    CCAP0L = value;
    CCAP0H = value >> 8;
    value += T38K4HZ;
    CR = 1;                                     //启动PCA计时器
    EA = 1;

    while (1);
}

