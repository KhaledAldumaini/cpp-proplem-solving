/*
    Problem 13: Read 3 numbers then print the max number
*/

#include <iostream>

using namespace std;

void ReadNumbers(int& num1, int& num2, int& num3) {

    cout << "\nEnter number1: ";
    cin >> num1;

    cout << "\nEnter number2: ";
    cin >> num2;

    cout << "\nEnter number3: ";
    cin >> num3;

}

int MaxOf3Numbers(int num1, int num2, int num3) {
    if (num1 > num2)
        if (num1 > num3)
            return num1;
        else
            return num3;
    else
        if (num2 > num3)
            return num2;
        else
            return num3;

}

void PrintResult(int MaxNumber) {

    cout << "\nMax number is: " << MaxNumber << endl;

}

int main()
{
    int num1, num2, num3;
    ReadNumbers(num1, num2, num3);
    PrintResult(MaxOf3Numbers(num1, num2, num3));
}