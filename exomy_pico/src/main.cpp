#include <stdio.h>
#include "pico/stdlib.h"
#include "exomy_config.h"
#include "SteeringServo.h"

bool direction = true;
int currentMicros = 3000;

SteeringServo steer_FL(PIN_STEER_FL, STEER_PWM_NEUTRAL_FL, STEER_PWM_RANGE);

int main() {
    while (true){
        //currentMicros += (direction)?5:-5;
        //if (currentMicros >= 2000) direction = false;
        //if (currentMicros <= 1000) direction = true;
        steer_FL.writePulse(currentMicros);
        sleep_ms(10);
    }
}