#include "Arduino.h"
#include "uUart.h"  
uUart::uUart()
{

}  

void uUart::init(unsigned long baud)
{
  uint16_t baud_setting = (((F_CPU / (baud * 16UL))) - 1);  
  UBRR0H = (uint8_t)(baud_setting >> 8);
  UBRR0L = (uint8_t)(baud_setting);
  UCSR0B = (1 << RXEN0) | (1 << TXEN0);
  UCSR0C = (3 << UCSZ00);
}
unsigned char uUart::receive()
{
  while (!(UCSR0A & (1 << RXC0)));
  return UDR0; 
}
void uUart::send(unsigned char data)
{
  while (!(UCSR0A & (1 << UDRE0)));
  UDR0 = data;
}
void uUart::print(char* StringPtr)
{
  while (*StringPtr != 0x00) {
    send(*StringPtr);
    StringPtr++;
  }
}

