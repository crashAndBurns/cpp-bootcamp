/*
 * 2/7/2026
 * Lecture on arithmetic operators to perform
 * actions on operands (values and/or variables)
 */

#include <iostream>
using namespace std;

int main() {
    // + addition
    // - subtraction
    // * multiplication
    // / division
    // % modulus (remainder)


    int a = 10;
    int b = 3;

    int sum = a + b;
    int difference = a - b;
    int product = a * b;
    int quotient = a / b;
    int remainder = a % b;

    cout << "Sum: " << sum << endl;
    cout << "Difference: " << difference << endl;
    cout << "Product: " << product << endl;
    cout << "Quotient: " << quotient << endl;
    cout << "Remainder: " << remainder << endl;

    // in c++ when you divide two integers like in quotient,
    // you get integer division and an integer answer.
    // any fractional part of the answer is cut off.
    // To get a decimal you'll need to use doubles.

    // compound operators
    // += Add and assign
    // -= Subtract and assign
    // *= multiply and assign
    // /= Divide and assign
    // %= modulus and assign
    int result = 10;
    result += 15;

    cout << "Result: " << result << endl;

    int myInt = 5;
    myInt++; // increment operator is myInt = myInt + 1
    cout << myInt << endl;
    myInt--; // Decrement operator is myInt = myInt - 1
    cout << myInt << endl;

    /*
     * Challenge:
     * Create a variable myNum, set it's value to 10
     * Increase myNum by 5 using a compound operator
     * On three separate lines, double it's value. 
     * Print the results
     */

    int myNum {10};
    myNum += 5; // 15
    myNum *= 2; // 30
    myNum *= 2; // 60
    myNum *= 2; // 120

    cout << myNum << endl;

    return 0;
}