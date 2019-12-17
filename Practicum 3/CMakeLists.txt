cmake_minimum_required(VERSION 3.15)
project(untitled1)

set(CMAKE_CXX_STANDARD 14)

add_executable(untitled1 "Dokter/main2.cpp" "Dokter/Dokter.cpp" "Dokter/Dokter.h" "Dokter/Orthopedist.cpp" "Dokter/Orthopedist.h" Computer/moederbord.cpp Computer/moederbord.h Computer/videokaart.cpp Computer/videokaart.h Computer/harddisk.cpp Computer/harddisk.h Computer/Computer.cpp Computer/Computer.h Werknemer/Werknemer.cpp Werknemer/Werknemer.h Werknemer/Manager.cpp Werknemer/Manager.h Werknemer/Directeur.cpp Werknemer/Directeur.h Werknemer/rest.h Werknemer/main.cpp)