#include<iostream>
#include<cstring>
int main()
{
	using namespace std;
	const int size = 15;

	char num1[size];
	char num2[size] = "C++owboy";
	 
	cout << "hello my name is " << num2;
	cout << "! What's your name?\n";
	cin >> num1;
	cout << "Well, " << num1 << ", your name has " << strlen(num1) << " letters and is stored\n";
	cout << "in an array of " << sizeof num1 << " bytes.";
	cout << "Your initial is " << num1[0];
	num2[3] = '\0';
	cout << "\nHere are the first 3 characters of my name: ";
	cout << num2 << endl;
	return 0;
}