#include "led.h"

void LedInit() {
	DDRA |= (1 << PORTA0);
}

void ledOn() {
	PORTA |= (1 << PORTA0);
}

void ledOff() {
	PORTA &= ~(1 << PORTA0);
}