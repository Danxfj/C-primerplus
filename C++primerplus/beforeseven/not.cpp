#include<iostream>
#include<climits>
bool is_int(double);
int main()
{
	using namespace std;
	double x;

	cout << "Yo,Enter an integer value: ";
	cin >> x;
	while (!is_int(x))
	{
		cout << "out or range input again: ";
		cin >> x;
	}
	int val = int(x);
	cout << "the integer you have entered is: " << x << "\nbye\n";
}
bool is_int(double x)
{
	if (x > INT_MIN && x < INT_MAX) 
		return true;
	else
		return false;
}