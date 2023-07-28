// Jacob Bria
// CIS 1202
// 07/28/2023


#include <iostream>
#include <string>
#include "character.h"
using namespace std;

int main()
{

   
	try {
        Character ch('a', 5);
        char target = ch.calcCharacter();
        cout << "test: " << target << endl;
    }
    catch (const InvalidCharacterException& e) {
        cout << "test catch" << endl;
        cout << e.what() << endl;
    }
    catch (const InvalidRangeException) {
        cout << "Test Catch in Main" << endl;
    }

}