/*
 * timelib.c
 *
 *  Created on: Mar 14, 2021
 *      Author: ASUS
 */
#include "timelib.h"
#include "stdint.h"
#include "tim.h"
#include <stdio.h>

static uint64_t tim_raw = 0;

void timelib_updateTimeCount(){
	tim_raw++ ;
}

void timelib_init(){
	HAL_TIM_Base_Start_IT(&htim6);
	HAL_TIM_Base_Start_IT(&htim7);
}

uint64_t timelib_getrawtime()
{	return tim_raw;}

void timelib_printTime(){
	uint8_t ms = tim_raw % 100;
	uint8_t  sec = (tim_raw % 6000)/100;
	uint8_t  min = (tim_raw % 360000)/6000;
	uint8_t  hrs = (tim_raw / 360000);

	printf("Time is %.2d:%.2d:%.2d:%.2d.\n\r", hrs,min,sec,ms);

}
