cmake_minimum_required(VERSION 2.8.9)
project (LubRest)

#Bring the headers into the project
include_directories(include)
#Bring the sources int the project
file(GLOB SOURCES "src/*.cpp")


#For the shared library:
#set ( PROJECT_LINK_LIBS libulfius.so )
#link_directories( /usr/local/lib/ )







add_executable(LubRest ${SOURCES})



#target_link_libraries(LubRest ${PROJECT_LINK_LIBS} )


target_link_libraries(LubRest ulfius)
target_link_libraries(LubRest curl)


#find_package(CURL)
#if (CURL_FOUND)
#  include_directories(${CURL_INCLUDE_DIRS})
#  target_link_libraries (LubRest ${CURL_LIBRARIES})
#endif (CURL_FOUND)



#Set the location for binary application -- i.e., /usr/local/bin in this case
#Use "sudo make install" to apply
install(TARGETS LubRest DESTINATION /usr/local/bin)