#include "millis.h"



bool millisInit(void)
{
  return true;
}

uint32_t millis(void)
{
  return HAL_GetTick();
}
