cmake_minimum_required(VERSION 3.29.1)
project(dsa)

set(SOURCE src/main.cpp)

add_executable(${PROJECT_NAME} ${SOURCE})
include_directories(include)
