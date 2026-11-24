cmake_minimum_required(VERSION 3.10)
project(FlightCheckIn CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB SOURCES "src/*.cpp")
add_executable(flight_checkin ${SOURCES})
target_include_directories(flight_checkin PRIVATE include)
