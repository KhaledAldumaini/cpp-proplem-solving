
#include<iostream>
#include<string>

using namespace std;

/*
	Problem: Write a program to check if the result is failed or passed
*/

int ReadGrade() {
	int Grade;
	cout << "\nPlease enter the grade: ";
	cin >> Grade;
	return Grade;
}

bool CheckResult(int Grade) {
	return (Grade >= 50) ? true : false;
}

void PrintResults(int Grade) {
	if (CheckResult(Grade))
		cout << "\nPassed:)";
	else
		cout << "\nFaild:(";
}

int main() {

	PrintResults(ReadGrade());

	return 0;
}