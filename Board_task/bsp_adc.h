//
// Created by 10612 on 2020/11/17.
//

#ifndef BSP_ADC_H
#define BSP_ADC_H

#include "struct_typedef.h"

extern void init_vrefint_reciprocal(void);

extern fp32 get_temprate(void);

extern fp32 get_battery_voltage(void);

extern uint8_t get_hardware_version(void);

#endif //DEMO2_BSP_ADC_H
