
#include<iostream>
#include<string>

using namespace std;

/*
	Problem: Write a program to get the user full name then print it by reverse way
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

string GetFullName(stFullName FullNameInfo, bool IsRevers = false) {

	string FullName = "";

	if(IsRevers)
		FullName = FullNameInfo.LastName + " " + FullNameInfo.FirstName;
	else
		FullName = FullNameInfo.FirstName + " " + FullNameInfo.LastName;

	return FullName;

}

void PrintFullName(string FullName) {

	cout << "\nYour full name is: " << FullName << endl;

}

int main() {

	PrintFullName(GetFullName(ReadFullName(), true));

	return 0;
}