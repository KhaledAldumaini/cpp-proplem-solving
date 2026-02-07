/*
    Problem 10: Read 3 number then print the average of them
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

int SumNumbers(int num1, int num2, int num3) {
    return num1 + num2 + num3;
}

float CalculateAverageOf3Numbers(int Total) {
    return (float)Total / 3;
}

void PrintResult(float Average) {

    cout << "\nThe average is : " << Average << endl;

}

int main()
{
    int num1, num2, num3;
    ReadNumbers(num1, num2, num3);
    PrintResult(CalculateAverageOf3Numbers(SumNumbers(num1, num2, num3)));
}