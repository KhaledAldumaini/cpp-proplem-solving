/*
    Problem 11: Read 3 number then calculte the average after that print the result(passed or failed)
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

bool CheckAverage(float Average) {
    return (Average >= 50) ? true : false;
}

void PrintResult(float Average) {

    cout << "\nYour average is: " << Average << endl;

    if (CheckAverage(Average))
        cout << "\nYou passed";
    else
        cout << "\nYou failed";

}

int main()
{
    int num1, num2, num3;
    ReadNumbers(num1, num2, num3);
    PrintResult(CalculateAverageOf3Numbers(SumNumbers(num1, num2, num3)));
}