#include<iostream>
long double probability(unsigned number, unsigned pick);
int main()
{
	using namespace std;
	unsigned number, pick;
	cout << "Enter the total number of choices on the game card"
		"and the number of picks allowed: \n";
	while ((cin >> number >> pick) && pick <= number)
	{
		cout << "You have one chance in " << probability(number, pick)
			<< " of winning.\n";
		cout << "Next two numbers (q to quit): \n";
	}
	cout << "bye\n";
	return 0;
}
long double probability(unsigned number, unsigned pick)
{
	long double result = 1.0;
	long double n;
	unsigned p;
	for (n = number, p = pick; p > 0; p--, n--)
	{
		result = result * n / p;
	}
	return result;
}