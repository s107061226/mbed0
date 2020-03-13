#include "mbed.h"

DigitalOut led(LED_RED);

int main(void)
{
   while (true) {
       led = !led; // toggle led
       wait(0.2f);
   }

   return 0;
}