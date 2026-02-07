/*
 * 2/7/2026
 * Project: Secret Agent ID generator
 * Will generate new ID based on information
 * collected from the user.
 * Full Name, Alias, Age, Level, Favorite Gadget
 * Format it into a stylized output that looks like
 * an id card
 */

#include <iostream>
#include <string>
using namespace std;

int main() {
    string fullName, alias, gadget;
    int age, level;

    cout << "Enter your full name: " << endl;
    getline(cin, fullName);

    cout << "What is your secret agent alias? " << endl;
    getline(cin, alias);

    cout << "How old are you? " << endl;
    cin >> age;

    cout << "Enter secret agent level: " << endl;
    cin >> level;
    cin.get();

    cout << "Favorite gadget? " << endl;
    getline(cin, gadget);
    
    cout << "Name: " << fullName << endl;
    cout << "Agent Id: " << alias << endl;
    cout << "Age: " << age << endl;
    cout << "Level: " << level << endl;
    cout << "Signature Gadget: " << gadget << endl;


    return 0;
}