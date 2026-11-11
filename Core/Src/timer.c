/*
 * timer.c
 *
 *  Created on: Nov 8, 2026
 *      Author: jynng
 */
#include "timer.h"
#include "main.h"
#include "scheduler.h"

static uint32_t time_ms = 0;
static uint32_t TIMER_TICK = 10;

void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim)
{
    if (htim->Instance == TIM2)
    {
    	time_ms += TIMER_TICK;
    	SCH_Update();
    }
}


int getTime()
{
	return time_ms;
}
