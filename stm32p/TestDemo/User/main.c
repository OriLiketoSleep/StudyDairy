#include "stm32f10x.h"                  // Device header
#include "LED.h"
#include "Delay.h"
#include "Buzzer.h"

int main()
{
	LED_Init();
	Buzzer_Init();
	while(1)
	{
		Buzzer(1);
		Delay_ms(200);
		Buzzer(0);
		Delay_ms(200);
	}
}
