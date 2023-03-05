#include <stdio.h>
#include <stdlib.h>
#include <wiringPi.h>

#define LED_R 0 // pin number for the red channel of the RGB LED
#define LED_G 1 // pin number for the green channel of the RGB LED
#define LED_B 2 // pin number for the blue channel of the RGB LED

void setup() {
    wiringPiSetup(); // initialize the wiringPi library
    pinMode(LED_R, OUTPUT); // set the red pin as output
    pinMode(LED_G, OUTPUT); // set the green pin as output
    pinMode(LED_B, OUTPUT); // set the blue pin as output
}

int main() {
    setup(); // setup the pins
    
    while(1) { // loop forever
        digitalWrite(LED_R, LOW); // turn off the red channel
        digitalWrite(LED_G, LOW); // turn off the green channel
        digitalWrite(LED_B, LOW); // turn off the blue channel
        
        delay(2500); // wait for 2.5 seconds
        
        digitalWrite(LED_R, HIGH); // turn on the red channel
        digitalWrite(LED_G, LOW); // turn off the green channel
        digitalWrite(LED_B, LOW); // turn off the blue channel
        
        delay(2500); // wait for 2.5 seconds
        
        digitalWrite(LED_R, LOW); // turn off the red channel
        digitalWrite(LED_G, HIGH); // turn on the green channel
        digitalWrite(LED_B, LOW); // turn off the blue channel
        
        delay(2500); // wait for 2.5 seconds
        
        digitalWrite(LED_R, HIGH); // turn on the red channel
        digitalWrite(LED_G, HIGH); // turn on the green channel
        digitalWrite(LED_B, LOW); // turn off the blue channel
        
        delay(2500); // wait for 2.5 seconds
        
        digitalWrite(LED_R, HIGH); // turn on the red channel
        digitalWrite(LED_G, LOW); // turn off the green channel
        digitalWrite(LED_B, HIGH); // turn on the blue channel
        
        delay(2500); // wait for 2.5 seconds
        
        digitalWrite(LED_R, LOW); // turn off the red channel
        digitalWrite(LED_G, HIGH); // turn on the green channel
        digitalWrite(LED_B, HIGH); // turn on the blue channel
        
        delay(2500); // wait for 2.5 seconds
        
        digitalWrite(LED_R, HIGH); // turn on the red channel
        digitalWrite(LED_G, HIGH); // turn on the green channel
        digitalWrite(LED_B, HIGH); // turn on the blue channel
        
        delay(2500); // wait for 2.5 seconds
    }
    
    return 0;
}


