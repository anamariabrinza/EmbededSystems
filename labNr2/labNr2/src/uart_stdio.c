/*
 * uart_stdio.c
 *
 * Created: 1/17/2017 17:35:05
 *  Author: Amy
 */ 
 #include "uart_stdio.h"


 #include <avr/io.h>

 #include <stdio.h>


 #define UART_BAUD  9600
 #define F_CPU 16000000L

 FILE my_stdio =  FDEV_SETUP_STREAM(uart_putchar, NULL, _FDEV_SETUP_RW);
 

 int uart_putchar(char c, FILE *stream)
 {

	 while(~UCSRA &(1<<UDRE));
	 UDR = c;

	 return 0;
 }



 void
 uart_stdio_Init(void)
 {

	 #if F_CPU < 2000000UL && defined(U2X)
	 UCSRA = _BV(U2X);             /* improve baud rate error by using 2x clk */
	 UBRRL = (F_CPU / (8UL * UART_BAUD)) - 1;
	 #else
	 UBRRL = (F_CPU / (16UL * UART_BAUD)) - 1;
	 #endif
	 UCSRB = _BV(TXEN) | _BV(RXEN); /* tx/rx enable */
	 stdout = &my_stdio;
	 stdin = &my_stdio;
 }