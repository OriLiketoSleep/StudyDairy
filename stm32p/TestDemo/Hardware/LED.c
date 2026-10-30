#include "stm32f10x.h"                  // Device header

void LED_Init(void)
{
	GPIO_InitTypeDef GPIO_InitStructure;
	GPIO_InitStructure.GPIO_Mode=GPIO_Mode_Out_PP;
	GPIO_InitStructure.GPIO_Pin=GPIO_Pin_All;
	GPIO_InitStructure.GPIO_Speed=GPIO_Speed_50MHz;
	
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA,ENABLE);
	GPIO_Init(GPIOA,&GPIO_InitStructure);
	GPIO_SetBits(GPIOA,GPIO_Pin_All);
}

void LED(unsigned int Location,unsigned char Enable)
{
	
	if(Enable)
	{
		switch(Location)
		{
			case 1:GPIO_ResetBits(GPIOA,0x0001);break;
			case 2:GPIO_ResetBits(GPIOA,0x0002);break;
			case 3:GPIO_ResetBits(GPIOA,0x0004);break;
			case 4:GPIO_ResetBits(GPIOA,0x0008);break;
			case 5:GPIO_ResetBits(GPIOA,0x0010);break;
			case 6:GPIO_ResetBits(GPIOA,0x0020);break;
			case 7:GPIO_ResetBits(GPIOA,0x0040);break;
			case 8:GPIO_ResetBits(GPIOA,0x0080);break;
		}
	}
	else
	{
		switch(Location)
		{
			case 1:GPIO_SetBits(GPIOA,0x0001);break;
			case 2:GPIO_SetBits(GPIOA,0x0002);break;
			case 3:GPIO_SetBits(GPIOA,0x0004);break;
			case 4:GPIO_SetBits(GPIOA,0x0008);break;
			case 5:GPIO_SetBits(GPIOA,0x0010);break;
			case 6:GPIO_SetBits(GPIOA,0x0020);break;
			case 7:GPIO_SetBits(GPIOA,0x0040);break;
			case 8:GPIO_SetBits(GPIOA,0x0080);break;
		}
	}
}
