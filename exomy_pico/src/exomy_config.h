#ifndef exomy_config_h
#define exomy_config_h

// Pin numbers for servo motors on Pico
#define PIN_STEER_FL 20
#define PIN_STEER_FR
#define PIN_STEER_CL
#define PIN_STEER_CR
#define PIN_STEER_RL
#define PIN_STEER_RR

#define PIN_DRIVE_FL 19
#define PIN_DRIVE_FR
#define PIN_DRIVE_CL
#define PIN_DRIVE_CR
#define PIN_DRIVE_RL
#define PIN_DRIVE_RR

// PWM values for the neutral steering position
#define STEER_PWM_NEUTRAL_FL 1500 
#define STEER_PWM_NEUTRAL_FR 1500
#define STEER_PWM_NEUTRAL_CL 1500
#define STEER_PWM_NEUTRAL_CR 1500
#define STEER_PWM_NEUTRAL_RL 1500
#define STEER_PWM_NEUTRAL_RR 1500

#define STEER_PWM_RANGE 250

#endif