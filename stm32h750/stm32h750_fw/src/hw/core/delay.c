/*
 * delay.c
 *
 *  Created on: 2020. 4. 15.
 *      Author: fietc
 */


#include "delay.h"



bool delayInit(void)
{
  return true;
}

void delay(uint32_t ms)
{
  HAL_Delay(ms);
}
