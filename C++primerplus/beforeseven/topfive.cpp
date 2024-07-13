#include<iostream>
#include<string>
const int SIZE = 5;
using namespace std;
void display(const string sa[], int n);
int main()
{
	string arr[SIZE];
	cout << "Enter your 5 favorite astronomical sights: \n";
	for (int i = 0; i < SIZE; i++)
	{
		cout << i + 1 << ": ";
		getline(cin, arr[i]);
	}
	cout << "Your list:\n";
	display(arr, SIZE);
	return 0;
}
void display(const string sa[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << i + 1 << ": " << sa[i] << endl;
	}
}