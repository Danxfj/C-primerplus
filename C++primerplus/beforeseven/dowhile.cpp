#include<iostream>
using namespace std;
int main()
{
	/*int n;

	cout << "Enter numbers in range 1-10 to find ";
	cout << "my favorite number\n";
	do
	{
		cin >> n;
	} while (n != 7);
	cout << "Yes, " << n << " is my favorite.\n";
	return 0;*/
	int i = 0;
	for (;;)
	{
		i++;
		cout << i << " ";
		if (30 >= i) break;
	}
}