/*
 * 2/7/2026
 * Lecture on Constants and naming
 * conventions.
 */

// Literal constant is typed directly into the code
// like 150 = int literal, 3.14 = double literal etc.

// symbolic constant is when you give a constant
// a name using the const keyword like
// const double MY_PI = 3.14159

// Cant change the value of a literal or a symbolic
// constant. Literal constants are basically the 
// "Magic Numbers" that get typed into code when people
// don't use variables.

#include <iostream>
#include <string>
using namespace std;

int main() {
    const double MY_PI = 3.14159;

    // This produces an error
    // MY_PI = 3.15;
    // but you can use it later like

    double radius = 3.0;
    double area = MY_PI * radius * radius;

    // Naming Conventions
    // for variables use camelCase
    // for constants use UPPER_SNAKE_CASE
    // Widely used by professionals

    // Challenge
    // Declare a constant string of MY_NAME
    // and set it to your name. Try to change it and
    // observe the compiler error. THen  remove the
    // change and print out with cout

    const string MY_NAME = "Frank";
    // MY_NAME = "Cochise";
    cout << MY_NAME << endl;


    return 0;
}