// Variables and data types part 2
// Working with strings and chars

// String is an object while char is a primative type
// primatives are built in while objects are not
// but they offer more functionality

#include <iostream>
#include <string> // so we can use variables
using namespace std;

int main() {
    char singleChar = 'a';
    // Char stores a single character and uses single quotes
    // not always one keystroke. Some chars like \n have two keystrokes
    // that are interpreted as a char.
    cout << singleChar << endl;

    // Strings hold full sequences of chars
    // but they are not built in to c++ so  we have to
    // include a new library.

    string myName = "Frank";

    cout << myName << endl;

    cout << "Hello " << myName << endl;

    return 0;
}
