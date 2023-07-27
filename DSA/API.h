// API.h
#ifndef API_H
#define API_H

// Declare the functions that will be part of the API
int addNumbers(int a, int b);
int multiplyNumbers(int a, int b);

#endif


// API.cpp
#include "API.h"

// Implement the functions
int addNumbers(int a, int b) {
    return a + b;
}

int multiplyNumbers(int a, int b) {
    return a * b;
}

