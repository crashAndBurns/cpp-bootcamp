/*
 * 2/7/2026
 * Lecture on getting user input using
 * cin and the string extraction operator.
 */

 // How to interact with the user?
 // Real programs ask for input and then
 // do something with it.

#include <iostream>
#include <string>
using namespace std;

int main() {
    int age; // variable to hold data from cin
    string fullName;

    cout << "Enter your age: " << endl;
    cin >> age;

    // notice the >> points towards the variable
    // the the << and >> point in the direction that 
    // data is flowing.

    cout << "Your age is: " << age << endl;

    // string extraction operator only gets info up
    // to whitespace (a space). Then it stops. To get a full
    // line you need to use getline operator.

    cout << "Enter your full name: " << endl;
    cin.get(); // This consumes the newline character so
    // that you can get the line.

    // this is a function, it gets the full line.
    // use cin as the first parameter and the variable
    // as the second parameter.
    getline(cin, fullName);
    
    cout << "Hello, " << fullName << endl;

    // Challenge
    // Create three variables
    // fullName, location, initialScore

    // Prompt user for
    // Full name (use getline)
    // Location (use getline)
    // score (use cin)

    // then print out these items using
    // the code provided in the challenge

    string fullName2, location;
    int initialScore;

    cout << "What is your full Name? " << endl;
    getline(cin, fullName2);
    
    cout << "Where are you from? " << endl;
    getline(cin, location);
    

    cout << "Enter your initial score: " << endl;
    cin >> initialScore;
    
    cout << "Hello, " << fullName2 << endl;
    cout << "We heard you are from " << location << endl;
    cout << "Your original score is " << initialScore << " but with " << endl;
    cout << "five points added, your score is " << (initialScore + 5) << endl;

    return 0;
}