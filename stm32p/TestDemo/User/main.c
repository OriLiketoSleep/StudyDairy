#include "stm32f10x.h"                  // Device header
#include "LED.h"
#include "Delay.h"
#include "Key.h"
#include "Buzzer.h"

int keynum;

int main()
{
	Key_Init();
	LED_Init();
	while(1)
	{
		keynum=Keyscan();
		if(keynum==1)
		{
			LED_Turn(2);
//			LED(2,1);
//			LED(3,0);
		}
		else if(keynum==2)
		{
			LED_Turn(3);
//			LED(2,0);
//			LED(3,1);
		}
		
	}
}
