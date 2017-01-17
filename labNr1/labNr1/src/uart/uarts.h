/*
 * uarts.h
 *
 * Created: 1/17/2017 14:49:37
 *  Author: Amy
 */ 


#ifndef UARTS_H_
#define UARTS_H_

#define UART_BAUD 9600
#define F_CPU 1000000UL

#include <stdio.h>
#include <avr/io.h>

void uartS_Init(void);
int    uart_PutChar(char c, FILE *stream);




#endif /* UARTS_H_ */