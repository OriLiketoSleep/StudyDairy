#include "stm32f10x.h"                  // Device header
#include "LED.h"
#include "Delay.h"
#include "Key.h"
#include "Buzzer.h"
#include "Lightsensor.h"

uint8_t light;

int main()
{
	Buzzer_Init();
	Light_Init();
	while(1)
	{
		light=Light_read();
		if(light==1)
			Buzzer(1);
		if(light==2)
			Buzzer(0);
		
	}
}
