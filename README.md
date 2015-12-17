# uUart
µUart library for Arduino with Atmega328P.<br>
The example uses only 678 Bytes.<br>
More stable then the Arduino serial library.<br>

```sh
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
```
