#include<iostream>
using namespace std;
char* left(const char* str, int n=1);
const int ArSize = 80;
int main()
{
	char sample[ArSize];
	cout << "Enter a string:\n";
	cin.get(sample, ArSize);
	char* ps = left(sample, 4);
	cout << ps << endl;
	delete[] ps;

	ps = left(sample);
	cout << ps << endl;
	delete[] ps;
	return 0;
}
char* left(const char* str, int n)
{
	if (n < 0)
		n = 0;
	int m = 0;
	while (m < n && str[m])
	{
		m++;
	}
	char* pt = new char[m+1];
	for (int i = 0; i < m; i++)
	{
		pt[i] = str[i];
	}
	pt[m] = '\0';
	return pt;
}