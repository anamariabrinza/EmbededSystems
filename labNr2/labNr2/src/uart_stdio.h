/*
 * uart_stdio.h
 *
 * Created: 1/17/2017 17:33:33
 *  Author: Amy
 */ 


#ifndef UART_STDIO_H_
#define UART_STDIO_H_

#include <stdio.h>

void uart_stdio_Init(void);
int uart_putchar(char c, FILE *stream);


#endif /* UART_STDIO_H_ */