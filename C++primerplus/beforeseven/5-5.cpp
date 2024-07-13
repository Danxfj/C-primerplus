#include<iostream>
using namespace std;
int main()
{
	const char* months[12]{
		"January","February","March","April",
		"May","June","July","August","September","October",
		"November","December"
	};
	int sale[12];
	int total = 0;
	for (int i = 0; i < 12; i++)
	{
		cout << *(months + i) << " sales: ";
		cin >> sale[i];
		total += sale[i];
	}
	cout << "The total sale amout is: " << total << endl;
	return 0;
}