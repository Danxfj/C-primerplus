#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout << "Enter characters, Enter # to quit: ";
	cin.get(ch);
	int count=0;
	while (ch != '#')
	{
		cout << ch;
		count++;
		cin.get(ch);
	}
	cout <<endl<< count << " characters entered \n";
	return 0;
}