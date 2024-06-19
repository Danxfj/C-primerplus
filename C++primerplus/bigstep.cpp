#include<iostream>
int main()
{
	using std::cout;
	using std::cin;
	using std::endl;

	int step;
	cout << "Enter an integer: ";
	cin >> step;
	cout << "counting by " << step << "s: \n";

	for (int i = 0; i < 100; i += step)
	{
		cout << i << endl;
	}
	return 0;
}