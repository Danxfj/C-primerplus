#include<iostream>
using namespace std;
int main()
{
	char firstName[50];
	char lastName[20];
	char grade;
	int age;

	cout << "What is your first name? ";
	cin.get(firstName, 50).get();
	cout << "What is your last name?";
	cin >> lastName;
	cout << "What letter grade do you deserve?";
	cin >> grade;
	cout << "What is your age?";
	cin >> age;

	char fullName[70];
	strcpy_s(fullName, sizeof(fullName), lastName);
	strcat_s(fullName, sizeof(fullName), ", ");
	strcat_s(fullName, sizeof(fullName), firstName);
	cout << "Name: " << fullName << endl;
	cout << "Grade: " << char(grade + 1) << endl;
	cout << "Age: " << age;
	return 0;
}