#include<iostream>
#include<string>
using namespace std;
int main()
{
	/*string word;
	cout << "Enter a word: ";
	cin >> word;
	cout << "the word is: " << word << endl;


	for (int i = word.size() - 1; i >= 0; i--)
	{
		cout << word[i];
	}
	cout << "\nBye.\n";
	return 0;*/
	int x = 6;
	x = 2 * x++ * (3 - ++x);
	cout << x;
}