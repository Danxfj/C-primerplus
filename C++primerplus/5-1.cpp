#include<iostream>
using namespace std;
int main()
{
	int small, big;
	cout << "Enter the small number: ";
	cin >> small;
	cout << "Enter the big number: ";
	cin >> big;

	if (small > big)
	{
		int temp;
		temp = small;
		small = big;
		big = temp;
	}
	int total = 0;

	for (int i=small; i <= big; i++)
	{
		total += i;
	}
	cout << "sum: " << total;
}