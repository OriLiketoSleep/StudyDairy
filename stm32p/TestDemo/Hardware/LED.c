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

void LED_Turn(unsigned int Location)
{
	
	switch(Location)
	{
		case 1:if(GPIO_ReadOutputDataBit(GPIOA,GPIO_Pin_0)==0)
	{
		GPIO_SetBits(GPIOA,GPIO_Pin_0);
	}
	else
	{
		GPIO_ResetBits(GPIOA,GPIO_Pin_0);
	}break;
		case 2:if(GPIO_ReadOutputDataBit(GPIOA,GPIO_Pin_1)==0)
	{
		GPIO_SetBits(GPIOA,GPIO_Pin_1);
	}
	else
	{
		GPIO_ResetBits(GPIOA,GPIO_Pin_1);
	};break;
		case 3:if(GPIO_ReadOutputDataBit(GPIOA,GPIO_Pin_2)==0)
	{
		GPIO_SetBits(GPIOA,GPIO_Pin_2);
	}
	else
	{
		GPIO_ResetBits(GPIOA,GPIO_Pin_2);
	}break;
		case 4:if(GPIO_ReadOutputDataBit(GPIOA,GPIO_Pin_3)==0)
	{
		GPIO_SetBits(GPIOA,GPIO_Pin_3);
	}
	else
	{
		GPIO_ResetBits(GPIOA,GPIO_Pin_3);
	}break;
		case 5:if(GPIO_ReadOutputDataBit(GPIOA,GPIO_Pin_4)==0)
	{
		GPIO_SetBits(GPIOA,GPIO_Pin_4);
	}
	else
	{
		GPIO_ResetBits(GPIOA,GPIO_Pin_4);
	}break;
		case 6:if(GPIO_ReadOutputDataBit(GPIOA,GPIO_Pin_5)==0)
	{
		GPIO_SetBits(GPIOA,GPIO_Pin_5);
	}
	else
	{
		GPIO_ResetBits(GPIOA,GPIO_Pin_5);
	}break;
		case 7:if(GPIO_ReadOutputDataBit(GPIOA,GPIO_Pin_6)==0)
	{
		GPIO_SetBits(GPIOA,GPIO_Pin_6);
	}
	else
	{
		GPIO_ResetBits(GPIOA,GPIO_Pin_6);
	}break;
		case 8:if(GPIO_ReadOutputDataBit(GPIOA,GPIO_Pin_7)==0)
	{
		GPIO_SetBits(GPIOA,GPIO_Pin_7);
	}
	else
	{
		GPIO_ResetBits(GPIOA,GPIO_Pin_7);
	};break;
	}
}
