/********************************************************************************
* led.h: Innehåller funktionalitet för enkel implementering av lysdioder 
		 och andra digitala utportar via strukten led samt associerade funktioner
********************************************************************************/

#ifndef LED_H_
#define LED_H_

#include "misc.h"

/********************************************************************************
* led: strukt för implementering av lysdioder och andra digitala utportar.
********************************************************************************/
struct led
{
	uint8_t pin;
	enum io_port io_port;
	bool enabled;
	
};

/********************************************************************************
* led_init: Initierar angiven pin till utport och registrerar vilket pin-nummer 
			och I/O-port som lysdioden är ansluten till.
********************************************************************************/
void led_init(struct led* self, const uint8_t pin);

/********************************************************************************
* led_clear: Nollställer lysdiod samt motsvarande pin.
*
*            - self: Pekare till lysdioden som ska nollställas.
********************************************************************************/
void led_clear(struct led* self);

/********************************************************************************
* led_on: Tänder angiven lysdiod.
*
*         - self: Pekare till lysdioden som ska tändas.
********************************************************************************/
void led_on(struct led* self);

/********************************************************************************
* led_off: Släcker angiven lysdiod.
*
*          - self: Pekare till lysdioden som ska släckas.
********************************************************************************/
void led_off(struct led* self);

/********************************************************************************
* led_toggle: Togglar utsignalen på angiven lysdiod. Om lysdioden är släckt vid
*             anropet så tänds den. På samma sätt gäller att om lysdioden är
*             tänd vid anropet så släcks den.
*
*             - self: Pekare till lysdioden vars utsignal ska togglas.
********************************************************************************/
void led_toggle(struct led* self);

/********************************************************************************
* led_blink: Blinkar lysdiod en gång med angiven blinkhastighet.
*
*            - self          : Pekare till lysdioden som ska blinkas.
*            - blink_speed_ms: Blinkhastigheten mätt i millisekunder.
********************************************************************************/
void led_blink(struct led* self, uint16_t blink_speed_ms);

#endif /* LED_H_ */