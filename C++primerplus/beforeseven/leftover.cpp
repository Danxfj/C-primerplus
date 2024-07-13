#include<iostream>
using namespace std;
unsigned long left(unsigned long num, unsigned ct);
char* left(const char* str, int n = 1);
int main()
{
	const char* trip = "Hawaii!!";
	unsigned long n = 12345678;
	int i;
	char* temp;

	for (int i = 1; i < 10; i++)
	{
		cout << left(n, i) << endl;
		temp = left(trip, i);
		cout << temp << endl;
		delete[] temp;
	}
	return 0;
}
unsigned long left(unsigned long num, unsigned ct)
{
	int n = num;
	int digits = 1;
	if (num == 0 || ct ==0)
		return 0;
	while (n /= 10)
	{
		digits++;
	}
	int cut = digits - ct;
	if (ct < digits)
	{
		while (cut--)
		{
			num /= 10;
		}
		return num;
	}
	else
	{
		return num;
	}
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
	char* pt = new char[m + 1];
	for (int i = 0; i < m; i++)
	{
		pt[i] = str[i];
	}
	pt[m] = '\0';
	return pt;
}