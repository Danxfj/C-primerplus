#include<iostream>
using namespace std;
void n_char(char, int);
int main()
{
	char ch;
	int time;
	
	cout << "Enter a character: ";
	cin >> ch;
	while (ch != 'q')
	{
		cout << "Enter an integer: ";
		cin >> time;
		n_char(ch, time);
		cout << "\nEnter another character"
			"or press the q-key to quite: ";
		cin >> ch;
	}
	cout << "The value of times is " << time << ".\n";
	cout << "bye\n";
}
void n_char(char c, int x)
{
	while (x-- > 0)
		cout << c;
}