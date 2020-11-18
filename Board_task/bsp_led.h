//
// Created by 10612 on 2020/11/16.
//
#ifndef BSP_LED_H
#define BSP_LED_H

#include "struct_typedef.h"

extern void led_on(void);

extern void led_off(void);

extern void led_r_on(void);
extern void led_g_on(void);
extern void led_b_on(void);

extern void led_flicker(int time,uint8_t x);

#endif //DEMO2_BSP_LED_H
