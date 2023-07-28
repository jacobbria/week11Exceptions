#pragma once
#ifndef CHARACTER_h
#define CHARACTER_h
using namespace std;

#include "INVALID_CHARACTER_EXCEPTION.h"
#include "INVALID_RANGE_EXCEPTION.h"

class Character {

private:
	char start;
	int offset;
public:

	Character() {}


	Character(char c, int o) {}

	void setstart(char c) {}

	void setOffset(int o) {}

	char getstart() {}

	int getOffset() {}

	char calcCharacter() {}


};
#endif // !CHARACTER_h