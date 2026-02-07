/*
 * 2/7/2026
 * Lecture on Logical operators.
 * Help combine and manipulate boolean expressions
 * to make more complex decisions in our programs
 */

// && and
// || or
// ! not - "flips" or negates the boolean value, ie true becomes false false
// becomes true. Memorizing truth tables is helpful.

/*
 * P   Q   P&&Q
 * T   T   T
 * T   F   F
 * F   T   F
 * F   F   F
 */

/*
 * P   Q   P||Q
 * T   T   T
 * T   F   T
 * F   T   T
 * F   F   F
 */

// && and || are binary operators meaning they require two operands to 
// function as intended. ! is a unary operator, meaning it only
// requires one operand to function.

#include <iostream>
using namespace std;

int main() {
    bool isRaining = true;
    bool isWarm = true;

    cout << boolalpha;

    cout << "isRaining AND isWarm: " << (isRaining && isWarm) << endl;
    cout << "isRaining OR isWarm: " << (isRaining || isWarm) << endl;
    cout << "NOT isRaining: " << (!isRaining) << endl;
    cout << "NOT isWarm: " << (!isWarm) << endl;


    return 0;
}