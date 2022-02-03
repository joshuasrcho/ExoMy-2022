add_library(SteeringServo SteeringServo.h SteeringServo.cpp)

target_link_libraries(SteeringServo
    pico_stdlib 
    hardware_gpio
    hardware_pwm
)

target_include_directories(SteeringServo PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")