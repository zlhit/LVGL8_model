#ifndef _USER_LED_H_
#define _USER_LED_H_


#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
void led_init(void);
void user_led_set_duty(uint8_t duty);

#endif


