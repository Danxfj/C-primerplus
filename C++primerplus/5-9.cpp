#include<iostream>
using namespace std;
int main()
{
	string str;
	int count = 0;
	cout << "Enter words (to stop, type the word done): " << endl;
	cin >> str;
	while (str != "done")
	{
		count++;
		cin >> str;
	}
	cout << "You entered a total of " << count << " words.";
	return 0;
}