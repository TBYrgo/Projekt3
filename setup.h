
#ifndef SETUP_H_
#define SETUP_H_

#include "misc.h"
#include "led.h"
#include "button.h"
#include "led_vector.h"
#include "adc.h"

extern volatile bool led1_enabled, led2_enabled, led3_enabled, led4_enabled, led5_enabled;

struct led l1, l2, l3, l4, l5;
struct button b1, b2, b3, b4, b5;
struct adc a1;
struct led_vector v1;


void setup(void);




#endif /* SETUP_H_ */