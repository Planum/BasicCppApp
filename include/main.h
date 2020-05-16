#ifndef MAIN_H 
#define MAIN_H 

// External Libs
#include <iostream>

// External Libs v2
#include <ulfius.h>

#include <curl/curl.h>



// Local Libs
#include "../include/libstest.h"


#define PORT 8080

struct _u_instance instance;

CURL *curl;
CURLcode res;

void test();



#endif