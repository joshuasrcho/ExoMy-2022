#ifndef steering_servo_h
#define steering_servo_h

class SteeringServo{
    public:
        SteeringServo(int pin, int pwm_neutral, int pwm_range);
        void writePulse(int micros);
        void setSteering(float angle);

    private:
        int servo_pin;
        int steer_pwm_neutral;
        int steer_pwm_range;
};

#endif