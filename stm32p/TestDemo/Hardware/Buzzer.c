#include "stm32f10x.h"                  // Device header

void Buzzer_Init(void)
{
	GPIO_InitTypeDef GPIO_InitStructrue;
	GPIO_InitStructrue.GPIO_Mode=GPIO_Mode_Out_PP;
	GPIO_InitStructrue.GPIO_Pin=GPIO_Pin_12;
	GPIO_InitStructrue.GPIO_Speed=GPIO_Speed_50MHz;
	
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB,ENABLE);
	GPIO_Init(GPIOB,&GPIO_InitStructrue);
}

void Buzzer(unsigned int Enable)
{
	if(Enable)
	{
		GPIO_ResetBits(GPIOB,GPIO_Pin_12);
	}
	else
	{
		GPIO_SetBits(GPIOB,GPIO_Pin_12);
	}
}
