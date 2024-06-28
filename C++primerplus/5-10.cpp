#include<iostream>
int main()
{
	using namespace std;
	int row;
	cout << "Enter how many row do you want: ";
	cin >> row;
	for (int i = 0; i < row; i++)
	{
		int period = row - i - 1;
		for (int j = 0; j < period; j++)
		{
			cout << ".";
		}
		for (int k = 0; k < i + 1; k++)
		{
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}