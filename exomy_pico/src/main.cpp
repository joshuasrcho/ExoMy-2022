#include <stdio.h>
#include "pico/stdlib.h"
#include "SteeringServo.h"

bool direction = true;
int currentMicros = 1000;
const uint big_servo_pin = 20;
const uint small_servo_pin = 19;

SteeringServo bigServo(big_servo_pin);
SteeringServo smallServo(small_servo_pin);

int main() {
    while (true){
        currentMicros += (direction)?5:-5;
        if (currentMicros >= 2000) direction = false;
        if (currentMicros <= 1000) direction = true;
        bigServo.writePulse(currentMicros);
        smallServo.writePulse(currentMicros);
        sleep_ms(10);
    }
}