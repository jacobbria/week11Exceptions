#include "CHARACTER.h"
#include <string>
#include <iostream>
using namespace std;

Character::Character() {	// default constructor
	start = ' ';
	offset = 0;
}

Character::Character(char c, int o) {	// input constructor
	try {
		if (!isalpha(c)) { // isalpha test if c is a letter
			throw InvalidCharacterException(""); // throw the error if its not a letter
		}
		start = c;
		offset = o;
	}
	catch (const InvalidCharacterException& e) {
		cout << e.what() << endl;	// display a more accuate error message
		throw;
	}
}

void Character::setstart(char c) {
	start = c;
}

void Character::setOffset(int o) {
	offset = o;
}

char Character::getstart() {
	return start;
}

int Character::getOffset() {
	return offset;
}

char Character::calcCharacter() {
	
	char result = start + offset;
	try {// Check if the result is outside the acceptable range
		if ((islower(start) && !islower(result)) || (isupper(start) && !isupper(result))) {
			throw InvalidRangeException("Invalid range!");
		}
		else return result;
	}
	catch (const InvalidRangeException) {
		throw;
	}

	return result;

}

