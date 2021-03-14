/*
 * terminal.h
 *
 *  Created on: Mar 14, 2021
 *      Author: ASUS
 */

#ifndef TERMINAL_H_
#define TERMINAL_H_
#include <stdio.h>

/* USER CODE BEGIN PTD */
#ifdef __GNUC__
  /* With GCC, small printf (option LD Linker->Libraries->Small printf
     set to 'Yes') calls __io_putchar() */
  #define PUTCHAR_PROTOTYPE int __io_putchar(int ch)
#else
  #define PUTCHAR_PROTOTYPE int fputc(int ch, FILE *f)
#endif /* __GNUC__ */
/* USER CODE END PTD */


#endif /* TERMINAL_H_ */
