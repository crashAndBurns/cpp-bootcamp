/*
 * 2/7/2026
 * Lecture on relational operators which are
 * used when you want to make decisions in your program based
 * on whether something is true or false. They
 * work closesly with the bool data type.
 */

 #include <iostream>
 using namespace std;

 int main() {
    // > Greater than
    // < Less than
    // >= Greater than or equal to
    // <= Less than or equal to
    // == Equal to operator
    // != Not equal to

    // DO NOT USE a single = sign when making a comparison
    // as it will attempt assignment and may produce
    // unpredictable results.

    cout << boolalpha;

    int a = 15;
    int b = 20;

    cout << (a < b) << endl;
    // Only work on coparable values
    // int, double, char
    // always return a bool value (t or f)

    // equal to
    bool areEqual = (a == b);
    cout << areEqual << endl;

    /*
     * Challenge:
     * Create a var called age and set it to your actual age
     * use the >= operator to check if you're at least 21.
     * print the result using cout
     */

     int age = 45;
     bool is21orOlder = (age >= 21);

     cout << is21orOlder << endl;

    return 0;
 }