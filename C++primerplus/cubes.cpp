#include<iostream>
double cube(double x);
double refcube(double &ra);
int main()
{
	using namespace std;
	double x = 3.0;

	cout << cube(x);
	cout << " = cube of " << x << endl;
	cout << refcube(x);
	cout << " = cube of " << x << endl;
	return 0;
}
double cube(double x)
{
	x *= x * x;
	return x;
}
double refcube(double& ra)
{
	ra *= ra * ra;
	return ra;
}
