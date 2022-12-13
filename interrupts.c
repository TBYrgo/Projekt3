#include "setup.h"

/********************************************************************************
interrupts: Definerar avbrottsrutinen för knappar som ligger på pin 2 och 3 
			samt knappar 11, 12 och 13.		
********************************************************************************/
ISR (PCINT2_vect)
{
	if (button_is_pressed(&b1))
	{
		led1_enabled = !led1_enabled;
	}
	
	else if (button_is_pressed(&b2))
	{
		led2_enabled = !led2_enabled;
	}
}

ISR (PCINT0_vect)
{
	if (button_is_pressed(&b3))
	{
		led3_enabled = !led3_enabled;

	}
	
	else if (button_is_pressed(&b4))
	{
		led4_enabled = !led4_enabled;	
	}
	
	else if (button_is_pressed(&b5))
	{
		led5_enabled = !led5_enabled;	
			
	}
}



