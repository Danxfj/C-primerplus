#include<iostream>
double average(double x, double y);
int main()
{
	using namespace std;
	double a, b;
	double aver = 0;
	cout << "Enter two number to calculate their average: ";
	while (cin >> a >> b)
	{
		aver = average(a, b);
		cout << "the average of the number is: " <<aver << endl;
		cout << "Continue or Enter q to quit: ";
	}
}
double average(double x, double y)
{
	double aver = 2.0 * x * y / (x + y);
	return aver;
}