#include<iostream>
using namespace std;
const int Max = 5;
int main()
{
	/*double fish[Max];
	cout << "Please Enter the weights of your fish.\n"
		"You may enter up to 5 fish <q to terminate>.\n";
	cout << "fish #1: ";
	int i = 0;
	while (i<Max && cin >> fish[i])
	{
		if (i++ < Max)
		{
			cout << "fish #" << i + 1 << ": ";
		}
	}
	double total = 0.0;
	for (int j = 0; j < i; j++)
	{
		total += fish[j];
	}
	cout << total / i << " = average weight of " << i << " fish\n";
	cout << "Done." << endl;
	return 0;*/
	/*int small = 1;
	int big = 2;
	bool compare = (small++ < big);
	cout << compare;*/
	double arr[5] = { 21.1,32.8,23.4,45.2,37.4 };
	double* pt = arr;

	cout << *(pt + 1);
}