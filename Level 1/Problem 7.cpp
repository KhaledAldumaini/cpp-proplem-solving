
#include<iostream>
#include<string>

using namespace std;

/*
	Problem: Read a number then print the half of it.
*/

float ReadNumber() {

	float Num;
	cout << "\nPlease enter a number: ";
	cin >> Num;
	return Num;

}

float CalculatHalfNumber(float Num) {
	return (Num / 2);
}

void PrintHalfNum(float Num) {

	cout << "\nHalf of " + to_string(Num) + " is " + to_string(CalculatHalfNumber(Num)) << endl;
}

int main() {

	PrintHalfNum(ReadNumber());

	return 0;
}