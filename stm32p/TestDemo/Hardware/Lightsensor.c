#include "stm32f10x.h"                  // Device header

void Light_Init(void)
{
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB,ENABLE);
	
	GPIO_InitTypeDef GPIO_InitStructrue;
	GPIO_InitStructrue.GPIO_Mode=GPIO_Mode_IPU;
	GPIO_InitStructrue.GPIO_Pin=GPIO_Pin_13;
	GPIO_InitStructrue.GPIO_Speed=GPIO_Speed_50MHz;
	
	GPIO_Init(GPIOB,&GPIO_InitStructrue);
}

uint8_t Light_read(void)
{
	uint8_t light;
	if(GPIO_ReadInputDataBit(GPIOB,GPIO_Pin_13))
	{
		light=1;
	}
	if(GPIO_ReadInputDataBit(GPIOB,GPIO_Pin_13)==0)
	{
		light=2;
	}
	return light;
}
