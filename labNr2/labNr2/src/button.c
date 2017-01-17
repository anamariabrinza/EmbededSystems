/*
 * button.c
 *
 * Created: 1/17/2017 17:13:21
 *  Author: Amy
 */ 

 #include "button.h"

 void init() {
	 DDRC &= ~(1 << PORTC5) ; //data direction register coresponding to the port C (DDRC) initialilizes the port
 }

 int isPressed() {
	 return PINC & (1<<PORTC5); //PINC register gets the reading from the input pins of the MCU
 }