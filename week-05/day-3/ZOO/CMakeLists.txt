cmake_minimum_required(VERSION 3.12)
project(ZOO)

set(CMAKE_CXX_STANDARD 14)

add_executable(ZOO main.cpp Animal.cpp Animal.h Birds.cpp Birds.h Reptiles.cpp Reptiles.h Mammals.cpp Mammals.h)