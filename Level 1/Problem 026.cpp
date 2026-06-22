/*
    Problem 26: Write a program to print number from 1 to N
*/

#include <iostream>

using namespace std;

int ReadNumber() {
    int Number;
    cout << "Please enter a number: ";
    cin >> Number;
    return Number;
}

void PrintNumbersFromOneToN(int Number) {
    for (int i = 0; i < Number; i++) {
        if (i == Number - 1) {
            cout << i + 1;
        }
        else
            cout << i + 1 << ", ";
    }
}
int main()
{
    PrintNumbersFromOneToN(ReadNumber());

}