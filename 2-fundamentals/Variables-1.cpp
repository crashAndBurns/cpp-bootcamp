#include <iostream>

// using namespace std;

int main() {
    // Part 1 2/6/2026

    int myInt; // A declaration, allocates main memory
    myInt = 15; // Initialization, gives the initial value of the variable
    // int is the data type, myInt is the identifier
    // = sign is the assignment operator, 15 is a literal constant
    // written directly in the code, it's value does not change.

    int myInt2 = 15; // Declaration and in initialization on the same line.
    // This line says three things, Declaration is when you introduce a new 
    // variable, initialization is giving a variable its first initial value,
    // and this whole thing is a statement. Statements end with ';'
    // An expression is something that creates a value.

    // Rules:
    // Identifiers must start with a letter or an _
    // Can include numbers after first char
    // can't include spaces or special characters
    // can't be a c++ keyword
    // Each statement ends with a semicolon

    // print myInt to the console.

    std::cout << myInt << std::endl;

    // int = whole counting numbers and their negatives
    // ex. 1, 2, 3, -1, -2, -3

    // double = floating point decimal numbers like pi
    // ex 3.14159

    double myDouble = 3.14159;

    // Must declare a variable before initializing it

    // Challenge print the double out in addition to the integer

    std::cout << myDouble << std::endl;

    // More than one way to initialize a variable in c++
    int x = 10; // copy initialization (assignment)
    int y (10);  // direct initialization
    int z {10};  // uniform (brace) initialization
    // brace init is preferred by many modern c++ developers.
    // it avoids thigns like narrowing conversions
    int ok = 3.14;
    // this truncatees the .14

    int bad {3.14};
    // this produces a compiler error because it detects where there would be
    // a narrowing conversion which is also called a lossy conversion.
    
    // widing conversion is when you store something less precise into a more
    // precise data type. Like storing an integer into a double.
    // widening conversions are called lossless conversions.

    // Style Conventions
    // Most variables begin with a lowercase letter and
    // are written in camelCase because you can't have spaces

    double stateTaxRate = 0.06;
    // makes it easier to read your variables.
    return 0;
}