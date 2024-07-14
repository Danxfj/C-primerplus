#include<iostream>
int main()
{
	using namespace std;
	double tvarps;
	cout << "Enter tvarps(Enter letter or negative to quit program): ";
	double tax = 0;
	while ((cin >> tvarps) && tvarps >= 0)
	{
		if (tvarps <= 5000)
		{
			tax = 0;
			cout << "tax is " << tax << endl;
		}
		else if (tvarps > 5000 && tvarps <= 15000)
		{
			tax = (tvarps - 5000) * 0.1;
			cout << "tax is " << tax << endl;
		}
		else if (tvarps > 15000 && tvarps <= 35000)
		{
			tax = (tvarps - 15000) * 0.15 + 1000;
			cout << "tax is " << tax << endl;
		}
		else if (tvarps > 35000)
		{
			tax = 1000.0 + 3000 + (tvarps - 35000) * 0.20;
			cout << "tax is " << tax << endl;
		}
		cout << "Enter tvarps(Enter letter or negative to quit program): ";
	}
	return 0;
}