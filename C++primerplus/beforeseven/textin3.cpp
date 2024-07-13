#include<iostream>
int main()
{
	using namespace std;
	/*char ch;
	cout << "Enter characters: ";
	int count = 0;
	while (cin.get(ch))//!cin.fail()
	{
		cout << ch;
		count++;
	}
	cout << endl << " read " << count << " characters\n";
	return 0;*/
	int count = 0;
	int ch;
	ch = cin.get();
	while (ch != EOF)
	{
		cout.put(ch);
		++count;
		ch = cin.get();
	}
}