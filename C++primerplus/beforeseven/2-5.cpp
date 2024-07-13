#include<iostream>
using namespace std;
double degree(double);
int main()
{
	cout << "Please enter a Celsius value: ";
	double Celsius;
	cin >> Celsius;
	double Fahrenheit = degree(Celsius);
	cout << Celsius << " degree Celsius is " << Fahrenheit << " degrees Fahrenheit." << endl;
}
double degree(double Celsius)
{
	double Fahrenheit = 1.8 * Celsius + 32.0;
	return Fahrenheit;
}