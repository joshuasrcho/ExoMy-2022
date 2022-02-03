#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/pwm.h"

# include "SteeringServo.h"

const int servo_pwm_wrap = 65465;
const float servo_clk_div = 38.1875;

SteeringServo::SteeringServo(int pin){
    // SET pin to PWM
    servo_pin = pin;
    gpio_set_function(servo_pin, GPIO_FUNC_PWM);
    // Figure out which slice we just connected to the pin
    uint slice_num = pwm_gpio_to_slice_num(servo_pin);

    // Set divider, reduces counter clock to sysclock/this value
    // freq = sys_clock/(clkdiv * wrap) = 125000000/(38.1875*65465) = 50hz
    pwm_config config = pwm_get_default_config(); 
    pwm_config_set_wrap(&config, servo_pwm_wrap);
    pwm_config_set_clkdiv(&config, servo_clk_div); // clk div = 38.1875 
    
    // Load the configuration into our PWM slice, and set it running.
    pwm_init(slice_num, &config, true);
}

void SteeringServo::writePulse(int micros){
    // 1000~2000 microsecond pulses for 180 degree servo
    // period is 20ms = 20000 microsecond
    pwm_set_gpio_level(servo_pin, (micros/20000.f)*servo_pwm_wrap);
}