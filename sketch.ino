#include "blinker.h"

void setup() {
	Blinker blinker;
	blinker.setupLed();
}

void loop() {
	Blinker blinker;
	blinker.turnLedOn();
	blinker.makePause();
	blinker.turnLedOff();
	blinker.makePause();
}