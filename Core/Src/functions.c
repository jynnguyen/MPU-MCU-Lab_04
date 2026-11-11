/*
 * functions.c
 *
 *  Created on: Nov 8, 2026
 *      Author: jynng
 */

#include "functions.h"
#include "main.h"
#include <stdio.h>
#include "timer.h"

extern UART_HandleTypeDef huart1;

int _write(int file, char *ptr, int len)
{
    HAL_UART_Transmit(&huart1, (uint8_t *)ptr, len, 100);
    return len;
}

void task_500ms()
{
	HAL_GPIO_TogglePin(LED_1_GPIO_Port, LED_1_Pin);
	printf("%d T1\r\n", getTime());
}

void task_1000ms()
{
	HAL_GPIO_TogglePin(LED_2_GPIO_Port, LED_2_Pin);
	printf("%d T2\r\n", getTime());
}

void task_1500ms()
{
	HAL_GPIO_TogglePin(LED_3_GPIO_Port, LED_3_Pin);
	printf("%d T3\r\n", getTime());
}

void task_2000ms()
{
	HAL_GPIO_TogglePin(LED_4_GPIO_Port, LED_4_Pin);
	printf("%d T4\r\n", getTime());
}

void task_2500ms()
{
	HAL_GPIO_TogglePin(LED_5_GPIO_Port, LED_5_Pin);
	printf("%d T5\r\n", getTime());
}

void task_test()
{
	HAL_GPIO_TogglePin(LED_6_GPIO_Port, LED_6_Pin);
	printf("%d T6\r\n", getTime());
}

void callback_10ms()
{
	printf("%d\r\n", getTime());
}

void delete_task_500ms()
{
	SCH_Delete_Task(1);
	printf("%d Del T1\r\n", getTime());
}
