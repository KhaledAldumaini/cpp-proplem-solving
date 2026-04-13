/*
    Problem 24: Write a program to validate the age of the user
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

void PrintRestult(int Age) {
    if (ValidatNumberInAge(Age, 18, 45)) {
        cout << "Age is valid";
    }
    else
        cout << "Age is NOT valid";
}
int main()
{
    PrintRestult(ReadAge());

}