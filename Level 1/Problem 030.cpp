/*
    Problem 30: Write a program to calculate the factorial
*/

#include <iostream>

using namespace std;


int ReadPositiveNumber() {
    int Number;
    do {
        cout << "Please  enter a positive number: ";
        cin >> Number;

    } while (Number < 0);

    return Number;
}

int CalculateFactorial(int Number) {
    int Factorial = 1;

    for (int i = Number; i >= 1; i--) {
        Factorial *= i;
    }
    return Factorial;
}
int main()
{
    int Number = ReadPositiveNumber();
    cout << "The factorial of number " << Number << " = " <<
        CalculateFactorial(Number);

}