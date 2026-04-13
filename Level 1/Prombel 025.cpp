/*
    Problem 24: Write a program to read user age and if it was invalid let him retry until entring a valid age
*/

#include <iostream>

using namespace std;

int ReadAge() {
    int Age;
    cout << "Please enter your age: ";
    cin >> Age;
    return Age;
}

bool ValidatNumberInAge(int Number, int From, int To) {
    return (Number >= From && Number <= To);
}

int ReadUntilAgeBetween() {
    int Age = 0;
    do {
        Age = ReadAge();
    } while (!ValidatNumberInAge(Age, 18, 45));
    return Age;
}

void PrintRestult(int Age) {
    cout << Age << " is a valid age";

}
int main()
{
    PrintRestult(ReadUntilAgeBetween());

}