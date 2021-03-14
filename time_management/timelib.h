/*
 * timelib.h
 *
 *  Created on: Mar 14, 2021
 *      Author: ASUS
 */

#ifndef TIMELIB_H_
#define TIMELIB_H_
#include "stdint.h"

void timelib_updateTimeCount();

void timelib_init();
uint64_t timelib_getrawtime();
void timelib_printTime();
#endif /* TIMELIB_H_ */
