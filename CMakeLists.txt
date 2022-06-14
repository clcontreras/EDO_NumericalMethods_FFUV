cmake_minimum_required(VERSION 3.21)
project(EDO_NumericalMethods_FFUV)

set(CMAKE_CXX_STANDARD 17)

add_executable(EDO_NumericalMethods_FFUV main.cpp euler.cpp euler.h RungeKutta_cuartoorden.cpp RungeKutta_cuartoorden.h)
