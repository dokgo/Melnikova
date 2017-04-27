cmake_minimum_required(VERSION 3.6)
project(Melnikova)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES src/secondLab.cpp src/Animals.cpp src/Animals.h src/SeaAnimals.cpp src/SeaAnimals.h)
add_executable(Melnikova ${SOURCE_FILES})