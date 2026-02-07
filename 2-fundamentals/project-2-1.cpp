/*
 * Project 2-1
 * Tip Calculator
 * By: Frank E. Ciszek
 * Purpose: Create a tip calculator that asks the user to enter
 * the total amount ofthe bill, then prompts for the tip 
 * percentage they would like to leave. Calculate the tip amount and
 * the total amount of teh bill after the tip.
 */

 #include <iostream>
 #include <iomanip>
 using namespace std;

 int main() {
    cout << fixed << setprecision(2);
    
    double billAmount;
    double tipPercentage;
    double totalAmount;
    double tipAmount;

    cout << "Enter the total amount of the bill: " << endl;
    cin >> billAmount;

    cout << "Enter the tip percentage as a whole numbre (0 to 100): " << endl;
    cin >> tipPercentage;
    tipPercentage /= 100;

    tipAmount = billAmount * tipPercentage;
    totalAmount = billAmount + tipAmount;

    cout << "The tip amount is: $" << tipAmount << endl;
    cout << "The total amount is: $" << totalAmount << endl;
    
    return 0;
 }