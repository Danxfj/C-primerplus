#include<iostream>
using namespace std;
double convert(double);
int main()
{
	cout << "Enter the number of light years: ";
	double lightYear;
	cin >> lightYear;
	double astronomicalUnits = convert(lightYear);
	cout << lightYear << " light years = " << astronomicalUnits << " astronomical units." << endl;
}
double convert(double lightYear)
{
	double astronomicalUnits = 63240*lightYear;
	return astronomicalUnits;
}