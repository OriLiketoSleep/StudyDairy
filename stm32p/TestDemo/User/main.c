#include "stm32f10x.h"                  // Device header
#include "LED.h"
#include "Delay.h"

int main()
{
	LED_Init();
	while(1)
	{
		LED(1,1);
		Delay_ms(125);
		LED(1,0);
		LED(2,1);
		Delay_ms(125);
		LED(2,0);
		LED(3,1);
		Delay_ms(125);
		LED(3,0);
		LED(4,1);
		Delay_ms(125);
		LED(4,0);
		LED(5,1);
		Delay_ms(125);
		LED(5,0);
		LED(6,1);
		Delay_ms(125);
		LED(6,0);
		LED(7,1);
		Delay_ms(125);
		LED(7,0);
		LED(8,1);
		Delay_ms(125);
		LED(8,0);
	}
}
