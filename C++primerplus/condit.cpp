#include<iostream>
using namespace std;
int main()
{
	int a, b;
	cout << "Enter two numbers: ";
	cin >> a >> b;
	cout << "the bigger number between " << a << " and " << b << " is: ";
	int c = a > b ? a: b;
	cout << c << endl;
	return 0;
}