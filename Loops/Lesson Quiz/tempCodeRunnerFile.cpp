#include <iostream>
using namespace std;


int main() {

    string name;
    int age, currentYear = 2022, birthYear;

    cout << "Enter your name: ";
    cin >> name;
    cout >> "Enter age: ";
    cin >> age;

    birthYear = currentYear - age;

    if (birthYear >= 1997 && birthYear <=  2012) {
        cout << "Hi, " << name;
        cout << "You are part of the Gen Z Generation";
    } else {
        cout << "Try again";
    }

    return 0;
}