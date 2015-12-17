#include "uUart.h"
uUart uart;

void setup() {
  //Set Baud
  uart.init(9600);
}

void loop() {
  //Echo Uart
  uart.send(uart.receive());
  //Print String
  uart.print("\nHello World\n");
}