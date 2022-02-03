add_executable(${PROJECT_NAME}
        main.cpp
)

# enable usb output, disable uart output
pico_enable_stdio_usb(${PROJECT_NAME} 1)
pico_enable_stdio_uart(${PROJECT_NAME} 0)

# create map/bin/hex file etc.
pico_add_extra_outputs(${PROJECT_NAME})

# pull in common dependencies and additional pwm hardware support
target_link_libraries(${PROJECT_NAME} 
    pico_stdlib 
    SteeringServo
)