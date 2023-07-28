#pragma once
#ifndef CHARACTER_h
#define CHARACTER_h
using namespace std;

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
		start = c;
		offset = o;
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

		return start + offset;

	}


};
#endif // !CHARACTER_h