#include "mbed.h"

void Blink(DigitalOut& led, int times)
{
    int i;
    
    for (i = 0; i < 2 * times; i++) {
        led = !led;
        wait(0.2f);
    }

    return;
}