#ifndef __MAIN_H
#define __MAIN_H

#include "stm32f4xx_hal.h"
#include "mpu.h"
#include "Board_LED.h"
extern I2C_HandleTypeDef hi2c1;
extern uint16_t Timebase_500ms_even_flag;
extern uint16_t Timebase_300ms_even_flag;
extern uint8_t TxBuffer[32];

#endif /* __MAIN_H */

