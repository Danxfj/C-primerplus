#include<iostream>
#include<string>
using namespace std;
int main()
{
	string FirstName, LastName;
	cout << "Enter your FirstName: ";
	getline(cin, FirstName);
	cout << "Enter your LastName: ";
	getline(cin, LastName);
	string fullName = FirstName +", "+ LastName;
	cout << "Here's the information in a single string: " << fullName;
	return 0;
}