#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char ch[100];
	int count = 0;
	cout << "Enter words (to stop, type the word done): " << endl;
	cin >> ch;
	while (strcmp(ch, "done") != 0)
	{
		count++;
		cin >> ch;
	}
	cout << "You entered a total of " << count << " words." << endl;
	return 0;
}