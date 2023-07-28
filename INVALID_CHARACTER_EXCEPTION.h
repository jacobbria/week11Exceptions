#pragma once
#ifndef INVALID_CHARACTER_EXCEPTION_H
#define INVALID_CHARACTER_EXCEPTION_H

#include <stdexcept>
#include <iostream>
using namespace std;

class InvalidCharacterException : public exception {
public:
    InvalidCharacterException(const char* message) : exception(message) {
        cout << "Error! Invalid input. Must be a valid letter." << endl;
    }
};

#endif // INVALID_CHARACTER_EXCEPTION_H