cmake_minimum_required(VERSION 3.15)
project(tijden)

set(CMAKE_CXX_STANDARD 17)

add_executable(tijden main.cpp Datum.cpp Datum.h Afspraak.cpp Afspraak.h Verzameling.cpp Verzameling.h)