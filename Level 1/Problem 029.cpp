/*
    Problem 29: Write a program to sum even numbers from 1 to N
*/

#include <iostream>

using namespace std;

enum enOddOrEven { Odd = 1, Even = 2 };

enOddOrEven CheckOddOrEven(int Number) {
    return (Number % 2 != 0) ? enOddOrEven::Odd : enOddOrEven::Even;
}

int ReadNumber() {
    int Number;
    cout << "Please enter a number: ";
    cin >> Number;
    return Number;
}

int SumOddNumbersFromOneToN(int Number) {
    int Sum = 0;

    for (int i = 1; i <= Number; i++) {
        if (CheckOddOrEven(i) == enOddOrEven::even) {
            Sum += i;
        }
    }
    return Sum;
}
int main()
{
    int Number = ReadNumber();
    cout << "The Summation of even numbers from " << Number << " = " <<
        SumOddNumbersFromOneToN(Number);

}