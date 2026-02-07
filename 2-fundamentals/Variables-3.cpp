// Part 3
// Working with booleans for control flow
// bool is crucial in logial operations
// can hold one, and only one, of two 
// values. True or False. Help us control flow of
// logic in our programs.

#include <iostream>
using namespace std;

int main() {
    bool isRaining = false;

    cout << isRaining << endl;
    // this outputs a zero, because 0 represents false
    // and 1 represents true. Use boolalpha to make
    // booleans more readable. boolalpha is sticky operator
    // meaning you don't have to keep repeating it.

    isRaining = true;
    cout << boolalpha;
    cout << isRaining << endl;

    // Booleans are important becasue they
    // are used to make decisions in our programs.

    // Challenge
    // Create a bool variable representing if it's sunny
    // create another bool variable for if its warm
    // use bool alpha to print both clearly.
     
    bool isSunny = true;
    bool isWarm = false;
    
    cout << "Is it sunny? " << isSunny << endl;
    cout << "Is it warm? " << isWarm << endl;
    
    return 0;
}