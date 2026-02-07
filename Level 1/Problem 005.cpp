
#include<iostream>
#include<string>

using namespace std;

/*
	Problem: Write a program to get the user full name then print it
*/

struct stFullName {
	string FirstName;
	string LastName;
};

stFullName ReadFullName() {

	stFullName FullName;

	cout << "\nPlease enter first name: ";
	cin >> FullName.FirstName;
	cout << "\nEnter your last name: ";
	cin >> FullName.LastName;

	return FullName;
}

string GetFullName(stFullName FullName) {

	return  FullName.FirstName + " " + FullName.LastName;

}

void PrintFullName(string FullName) {

	cout << "\nYour full name is: " << FullName << endl;

}

int main() {

	PrintFullName(GetFullName(ReadFullName()));

	return 0;
}