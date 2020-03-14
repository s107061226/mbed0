#include "mbed.h"

DigitalOut redLED(LED_RED);
DigitalOut greenLED(LED_GREEN);

int Led(DigitalOut& ledpin);    // function for blinking 5 times

int main(void)
{
   redLED = 1;          // turn off redLED
   greenLED = 1;        // turn off greenLED

   while (true) {
       Led(redLED);
       Led(greenLED);
   }

}