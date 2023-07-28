#pragma once
#ifndef INVALID_RANGE_EXCEPTION_H
#define INVALID_RANGE_EXCEPTION_H

#include <stdexcept>
#include <iostream>
using namespace std;

class InvalidRangeException : public exception {
public:
    InvalidRangeException(const char* message) : exception(message) {
        cout << "Error! Invalid input - Must be a letter A-Z or a-z." << endl;
    }
};

#endif // INVALID_C
