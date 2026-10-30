#include "stm32f10x.h"                  // Device header
#include "Delay.h"

void Key_Init(void)
{
	GPIO_InitTypeDef GPIO_InitStructrue;
	GPIO_InitStructrue.GPIO_Mode=GPIO_Mode_IPU;
	GPIO_InitStructrue.GPIO_Pin=GPIO_Pin_1|GPIO_Pin_11;
	GPIO_InitStructrue.GPIO_Speed=GPIO_Speed_50MHz;
	
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB,ENABLE);
	GPIO_Init(GPIOB,&GPIO_InitStructrue);
}

int Keyscan(void)
{
	int keynum=0;
	if(GPIO_ReadInputDataBit(GPIOB,GPIO_Pin_1)==0)
	{
		Delay_ms(20);
		while(GPIO_ReadInputDataBit(GPIOB,GPIO_Pin_1)==0);
		Delay_ms(20);
		keynum=1;
	}
	if(GPIO_ReadInputDataBit(GPIOB,GPIO_Pin_11)==0)
	{
		Delay_ms(20);
		while(GPIO_ReadInputDataBit(GPIOB,GPIO_Pin_11)==0);
		Delay_ms(20);
		keynum=2;
	}
	return keynum;
}
