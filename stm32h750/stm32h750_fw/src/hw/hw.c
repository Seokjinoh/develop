/*
 * hw.c
 *
 *  Created on: 2020. 4. 15.
 *      Author: fietc
 */

#include "hw.h"

void hwInit(void)
{
	bspInit();

	delayInit();
	millisInit();
	ledInit();
}
