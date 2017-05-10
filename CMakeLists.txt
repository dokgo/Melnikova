cmake_minimum_required(VERSION 3.6)
project(Melnikova)

set(CMAKE_CXX_STANDARD 11)

#set(SOURCE_FILES src/third/*.cpp)
file(GLOB SOURCE src/third/*.cpp src/third/*.h)
add_executable(Melnikova ${SOURCE})