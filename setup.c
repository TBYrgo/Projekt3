#include "setup.h"

/********************************************************************************
* Setup: Setup med inkluderingsfiler och struktar med mera.
********************************************************************************/
/*Definerar extern bool*/
volatile bool led1_enabled = false,	
		 led2_enabled = false,
		 led3_enabled = false,
		 led4_enabled = false,
		 led5_enabled = false;

/********************************************************************************
Setup funktion som initierar lysdioder, knappar och potentiometer. Initerar även 
interrupts.
********************************************************************************/
void setup(void)
{
	
	led_init(&l1, 6);
	led_init(&l2, 7);
	led_init(&l3, 8);
	led_init(&l4, 9);
	led_init(&l5, 10);
	
	button_init(&b1, 2);
	button_init(&b2, 3);
	button_init(&b3, 11);
	button_init(&b4, 12);
	button_init(&b5, 13);
	button_enable_interrupt(&b1);
	button_enable_interrupt(&b2);
	button_enable_interrupt(&b3);
	button_enable_interrupt(&b4);
	button_enable_interrupt(&b5);
	
	adc_init(&a1, A0);
	
}