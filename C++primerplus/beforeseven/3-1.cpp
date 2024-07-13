#include<iostream>
int main()
{
	const int inch_to_foot = 12;
	using namespace std;
	cout << "put your height(inch):____\b\b\b\b ";
	int inch;
	cin >> inch;
	cout << "your height is " << inch / inch_to_foot << " foot" << " and " << inch % inch_to_foot << " inch(s)" << endl;
}