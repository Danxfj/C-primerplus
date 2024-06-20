#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout << "Enter characters;enter # to quit: \n";
	cin >> ch;
	int count = 0;
	while (ch != '#')
	{
		cout << ch;
		count++;
		cin >> ch;
	}
	cout << endl << count << " characters read\n";
	return 0;
}