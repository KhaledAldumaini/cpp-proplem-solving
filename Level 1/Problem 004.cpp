
#include<iostream>
#include<string>

using namespace std;

/*
	Problem: Write a program to ask the user to enter his age and drive liecnse,
	then print 'Hired' if his age greater than 21 and he has a drive liecnse, otherwise print 'Rejected'
*/

struct stUserInfo {
	int Age;
	bool HasDrivingLicense;
};

stUserInfo ReadUserInfo() {

	stUserInfo UserInfo;
	char HasDriLie;

	cout << "\nPlease enter your age: ";
	cin >> UserInfo.Age;

	cout << "\nDo you have a drive liecnse?[y/n] ";
	cin >> HasDriLie;
	(toupper(HasDriLie) == 'Y') ? UserInfo.HasDrivingLicense = true : UserInfo.HasDrivingLicense = false;

	return UserInfo;
}

bool IsHired(stUserInfo UserInfo) {

	return (UserInfo.Age >= 21 && UserInfo.HasDrivingLicense);
}

void PrintResult(stUserInfo UserInfo) {
	if (IsHired(UserInfo))
		cout << "\nYou are HIRED!" << endl;
	else
		cout << "\nSorry, you are rejected";
}

int main() {

	PrintResult(ReadUserInfo());

	return 0;
}