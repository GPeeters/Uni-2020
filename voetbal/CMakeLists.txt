cmake_minimum_required(VERSION 3.15)
project(voetbal)

set(CMAKE_CXX_STANDARD 14)

add_executable(voetbal main.cpp Speler.cpp Speler.h Actie.cpp Actie.h Keeper.cpp Keeper.h verdediger.cpp verdediger.h middenvelder.cpp middenvelder.h aanvaller.cpp aanvaller.h SaveActie.cpp SaveActie.h team.cpp team.h loop.cpp loop.h OnderschepActie.cpp OnderschepActie.h PasActie.cpp PasActie.h doelpoging.cpp doelpoging.h)