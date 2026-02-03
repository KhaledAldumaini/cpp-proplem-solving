#include<iostream>
using namespace std;

/*
	Problem: Read a name form the user then print it.
*/

string ReadName() {
	string Name;
	cout << "\nPlease enter your name: ";
	cin >> Name;
	return Name;
}

void PrintName(string Name) {

	cout << "\nYour name is " << Name << endl;

}

int main() {

	PrintName(ReadName());

	return 0;
}