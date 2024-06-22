#include<iostream>
const int Max = 5;
int main()
{
	using namespace std;
	int golf[Max];
	cout << "Please enter your golf scores.\n";
	"You must enter 5 rounds.\n";
	for (int i = 0; i < Max; i++)
	{
		cout << "round #" << i + 1 << ": ";
		while (!(cin >> golf[i]))
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Please Enter a number: ";
		}
	}
	double total = 0.0;
	for (int i = 0; i < Max; i++)
		total += golf[i];
	cout << total / Max << " = average score "
		<< Max << " rounds\n";
	return 0;
}