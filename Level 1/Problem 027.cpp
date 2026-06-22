/*
    Problem 27: Write a program to print number from N to 1
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
    for (int i = Number; i > 0; i--) {
        if (i == 1) {
            cout << i;
        }
        else
            cout << i << ", ";
    }
}
int main()
{
    PrintNumbersFromOneToN(ReadNumber());

}