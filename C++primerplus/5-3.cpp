#include<iostream>
using namespace std;
int main()
{
	double total=0;
	double x;
	cout << "Enter a number: ";
	cin >> x;
	while (x!= 0)
	{
		total += x;
		cout << total << endl;
		cout << "Enter a number: ";
		cin >> x;
	}
	cout << total << endl;
	return 0;
}