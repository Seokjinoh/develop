#include "ap.h"

void apInit(void)
{
	hwInit();
}

void apMain(void)
{
  uint32_t pre_time;
  uint32_t cnt=0;

  pre_time = millis();
  while(1)
  {
    if ((cnt<=10)&&(millis()-pre_time >= 100))
    {
    	cnt++;
      pre_time = millis();

      ledToggle(_DEF_LED1);
    }
    if ((millis()-pre_time >= 500)&&(cnt>10))
    {
    	cnt++;
      pre_time = millis();

      ledToggle(_DEF_LED1);
      if(cnt>=20)
      {
      	cnt=0;
      }
    }
  }
}
