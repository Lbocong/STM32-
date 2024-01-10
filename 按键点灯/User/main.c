#include "stm32f10x.h"                  // Device header
#include "Delay.h"
#include "LED.h"
 #include "KEY.h"
#include "SERIAL.h"
 uint8_t  KeyNum;

int main(void)
{	
	 LED_init();
	 Key_Init();

	
	
	while(1)                                       //按键点亮
	{
	KeyNum  = Key_GetNum();
		if (KeyNum ==1)
		{
			LED_Turn();
		}
		
		
	}
}	




