cmake_minimum_required(VERSION 3.10)
project(traffic)

set(CMAKE_CXX_STANDARD 11)

add_executable(traffic
    traffic/main.cpp
    traffic2/traffic_light.cpp
    C:/users/abulg/mp2-lab1-set/src/tbitfield.cpp
)

target_include_directories(traffic
    traffic2
    C:/users/abulg/mp2-lab1-set/include
)