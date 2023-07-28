#include "INVALID_CHARACTER_EXCEPTION.h"
#include <string>
#include <iostream>
using namespace std;

InvalidCharacterException::InvalidCharacterException(const char* message) : exception(message) {
    cout << "Error! Invalid input - Must be a letter A-Z or a-z." << endl;
}