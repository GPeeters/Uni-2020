cmake_minimum_required(VERSION 3.15)
project(boom C)

set(CMAKE_C_STANDARD 11)

add_executable(boom main.c Sensor.h Sensor.c Boom.h Boom.c Sensor.c)