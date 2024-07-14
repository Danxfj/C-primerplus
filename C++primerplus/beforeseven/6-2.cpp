#include<iostream>
#include<array>

int main()
{
	using namespace std;
	array<double,10> donations;

	double donation;
	int i = 0;

	int count = 0;
	double average = 0;
	double total = 0;


	while (cin >> donation && i<10)
	{
		donations[i] = donation;
		i++;
	}

	for (int j=0;j<i;j++)
	{
		total += donations[j];
	}
	average = total / i;

	for (int j = 0; j < i; j++)
	{
		if (donations[j] > average)
			count++;
	}
	cout << "average: " << average << endl;
	cout << count << " number bigger than average" << endl;
	return 0;
}