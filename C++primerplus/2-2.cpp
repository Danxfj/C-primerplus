#include<iostream>
using namespace std;
double convert(double);
int main()
{
	int distance;
	cout << "please input the distance: ";
	cin >> distance;
	double n=convert(distance);
	cout << distance << " long = " << n << " ma" << endl;
}
double convert(double x)
{
	return x * 220;
}