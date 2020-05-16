cmake_minimum_required(VERSION 2.8.9)
project (LubRest)

#Bring the headers into the project
include_directories(include)

file(GLOB SOURCES "src/*.cpp")

add_executable(LubRest ${SOURCES})


#Set the location for binary application -- i.e., /usr/local/bin in this case
#Use "sudo make install" to apply
install(TARGETS LubRest DESTINATION /usr/local/bin)