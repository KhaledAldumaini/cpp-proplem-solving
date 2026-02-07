/*
    Problem 12: Read 2 numbers then print the max number
*/

#include <iostream>

using namespace std;

void ReadNumbers(int& num1, int& num2) {

    cout << "\nEnter number1: ";
    cin >> num1;

    cout << "\nEnter number2: ";
    cin >> num2;

}

int FindMaxNumber(int num1, int num2) {
    if (num1 > num2)
        return num1;
    else
        return num2;
}

void PrintResult(int MaxNumber) {

    cout << "\nMax number is: " << MaxNumber << endl;

}

int main()
{
    int num1, num2;
    ReadNumbers(num1, num2);
    PrintResult(FindMaxNumber(num1, num2));
}