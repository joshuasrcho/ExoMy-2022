#ifndef steering_servo_h
#define steering_servo_h

class SteeringServo{
    public:
        SteeringServo(int pin);
        void writePulse(int micros);

    private:
        int servo_pin;
};

#endif