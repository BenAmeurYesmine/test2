/*
 * terminal.c
 *
 *  Created on: Mar 14, 2021
 *      Author: ASUS
 */

#include "usart.h"
#include "terminal.h"

PUTCHAR_PROTOTYPE {
  /* Place your implementation of fputc here */
  /* e.g. write a character to the EVAL_COM1 and Loop until the end of transmission */
  HAL_UART_Transmit(&huart2, (uint8_t *)&ch, 1, 0xFFFF);

  return ch;
}
