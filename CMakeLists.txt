cmake_minimum_required(VERSION 2.8.9)
project (Hello)

#Bring the headers into the project
include_directories(include)

file(GLOB SOURCES "src/*.cpp")

add_executable(hello ${SOURCES})
