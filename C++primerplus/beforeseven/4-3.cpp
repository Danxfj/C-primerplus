#include<iostream>
#include<cstring>
int main()
{
	using namespace std;
	char firstName[50];
	char lastName[50];
	cout << "Enter your first name: ";
	cin.getline(firstName, 50);
	cout << "Enter your last name: ";
	cin.getline(lastName, 50);

	char fullName[100];
	strcpy_s(fullName, sizeof(fullName), lastName);
	strcat_s(fullName, sizeof(fullName), ", ");
	strcat_s(fullName, sizeof(fullName), firstName);

	cout << "Here's the information in a single string:" << fullName<<endl;
}