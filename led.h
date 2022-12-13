/********************************************************************************
* led.h: Inneh�ller funktionalitet f�r enkel implementering av lysdioder 
		 och andra digitala utportar via strukten led samt associerade funktioner
********************************************************************************/

#ifndef LED_H_
#define LED_H_

#include "misc.h"

/********************************************************************************
* led: strukt f�r implementering av lysdioder och andra digitala utportar.
********************************************************************************/
struct led
{
	uint8_t pin;
	enum io_port io_port;
	bool enabled;
	
};

/********************************************************************************
* led_init: Initierar angiven pin till utport och registrerar vilket pin-nummer 
			och I/O-port som lysdioden �r ansluten till.
********************************************************************************/
void led_init(struct led* self, const uint8_t pin);

/********************************************************************************
* led_clear: Nollst�ller lysdiod samt motsvarande pin.
*
*            - self: Pekare till lysdioden som ska nollst�llas.
********************************************************************************/
void led_clear(struct led* self);

/********************************************************************************
* led_on: T�nder angiven lysdiod.
*
*         - self: Pekare till lysdioden som ska t�ndas.
********************************************************************************/
void led_on(struct led* self);

/********************************************************************************
* led_off: Sl�cker angiven lysdiod.
*
*          - self: Pekare till lysdioden som ska sl�ckas.
********************************************************************************/
void led_off(struct led* self);

/********************************************************************************
* led_toggle: Togglar utsignalen p� angiven lysdiod. Om lysdioden �r sl�ckt vid
*             anropet s� t�nds den. P� samma s�tt g�ller att om lysdioden �r
*             t�nd vid anropet s� sl�cks den.
*
*             - self: Pekare till lysdioden vars utsignal ska togglas.
********************************************************************************/
void led_toggle(struct led* self);

/********************************************************************************
* led_blink: Blinkar lysdiod en g�ng med angiven blinkhastighet.
*
*            - self          : Pekare till lysdioden som ska blinkas.
*            - blink_speed_ms: Blinkhastigheten m�tt i millisekunder.
********************************************************************************/
void led_blink(struct led* self, uint16_t blink_speed_ms);

#endif /* LED_H_ */