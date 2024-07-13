#include<iostream>
using namespace std;
const double hundredkilo_to_mile = 62.14;
const double gallon_to_liter = 3.875;
int main()
{
	double liter_per_hundredkilo;
	cout << "Enter liter_per_hundredkilo: ";
	cin >> liter_per_hundredkilo;
	double gallon = liter_per_hundredkilo / gallon_to_liter;
	double mile_per_gallon = hundredkilo_to_mile / gallon;
	cout << liter_per_hundredkilo << " liter_per_hundredkilo equals " << mile_per_gallon
		<< " mile_per_gallon" << endl;
}