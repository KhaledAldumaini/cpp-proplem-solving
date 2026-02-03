#include<iostream>
using namespace std;

/*
	Problem: Read a number then check if it is an odd or even
*/

enum enNumberType { even = 0, odd = 1 };

int ReadNumber() {
	int Number;
	cout << "\nPlease enter a number: ";
	cin >> Number;
	return Number;
}

enNumberType CheckNumberType(int Number) {

	return (Number % 2 == 0) ? enNumberType::even : enNumberType::odd;
}

void PrintNumberType(enNumberType NumberType) {
	if (NumberType == enNumberType::even)
		cout << "\nNumber is even" << endl;
	else
		cout << "\nNumber is odd" << endl;
}

int main() {

	PrintNumberType(CheckNumberType(ReadNumber()));

	return 0;
}