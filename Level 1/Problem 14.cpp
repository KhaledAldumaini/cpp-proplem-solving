/*
    Problem 14: Swap two numbers
*/

#include <iostream>

using namespace std;

void Swap2Numbers(int& num1, int& num2) {

    int TempNum = 0;
    TempNum = num1;
    num1 = num2;
    num2 = TempNum;

}



void PrintNumbers(int num1, int num2) {

    cout << "\nNumber one is: " << num1 << endl;
    cout << "\nNumber two is: " << num2 << endl;

}

int main()
{
    int num1 = 5, num2 = 10;
    PrintNumbers(num1, num2);

    Swap2Numbers(num1, num2);
    cout << "\nAfter swaping:\n";
    PrintNumbers(num1, num2);
}