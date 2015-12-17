#include "Arduino.h"
#ifndef uUart_h
#define uUart_h

class uUart
{
  public:
    uUart();
    void init(unsigned long baud);
    void send(unsigned char data);
    void putstring(char* StringPtr); 
    unsigned char receive();    
};

#endif

