#include "stm32f10x.h"                  // Device header
#include "LED.h"
#include "Delay.h"

int main()
{
	LED_Init();
	while(1)
	{
		LED(1,1);
		Delay_ms(100);
		LED(1,0);
		Delay_ms(100);
	}
}
