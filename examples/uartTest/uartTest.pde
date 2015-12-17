#include "uUart.h"
uUart uart;

void setup() {
  // put your setup code here, to run once:
  uart.init(250000);
}

void loop() {
  // put your main code here, to run repeatedly:
  uart.send(uart.receive());
}