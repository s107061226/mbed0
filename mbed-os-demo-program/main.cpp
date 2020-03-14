#include "mbed.h"

DigitalOut redLED(LED_RED);
DigitalOut greenLED(LED_GREEN);

void Blink(DigitalOut& led, int times);

int main(void) 
{
    redLED = 1;
    greenLED = 1;
    while (true) {
        Blink(redLED, 3);
        Blink(greenLED, 2);
    }
    
    return 0;
}