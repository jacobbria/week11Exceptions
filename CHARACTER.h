#pragma once
#ifndef CHARACTER_h
#define CHARACTER_h
using namespace std;

#include "INVALID_CHARACTER_EXCEPTION.h"

class Character {

private:
	char start;
	int offset;
public:

	Character() {	// default constructor
		start = ' ';
		offset = 0;
	}


	Character(char c, int o) {	// input constructor
		try {
			if (!isalpha(c)) { // isalpha test if c is a letter
				throw InvalidCharacterException(""); // throw the error if its not a letter
			}
			start = c;
			offset = o;
		}
		catch (const InvalidCharacterException& e) {
			cout << e.what() << endl;	// display a more accuate error message
		}


	}

	void setstart(char c) {
		start = c;
	}

	void setOffset(int o) {
		offset = o;
	}

	char getstart() {
		return start;
	}

	int getOffset() {
		return offset;
	}


	char calcCharacter() {

		char target = start + offset;	// target variable for validating
		try {



		}
		catch {


		}


		return start + offset;

	}


};
#endif // !CHARACTER_h