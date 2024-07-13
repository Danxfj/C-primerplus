#include<iostream>
using namespace std;
int main()
{
	long long USPopulation;
	long long WorldPopulation;

	cout << "Enter the world's population: ";
	cin >> WorldPopulation;
	cout << "Enter the population of the US: ";
	cin >> USPopulation;
	double ratio = (double(USPopulation) / WorldPopulation)*100;
	cout.setf(ios_base::fixed, ios_base::floatfield);
	cout << "The population of the US is " << ratio << "% of the world population.";
	return 0;
}