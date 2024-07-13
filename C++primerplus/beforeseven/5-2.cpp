#include<iostream>
#include<array>
const int ArSize = 101;
int main()
{
	using namespace std;
	array<long double, ArSize> factorial;
	factorial[0] = factorial[1] = 1;
	for (int i = 2; i <ArSize; i++)
	{
		factorial[i] = i * factorial[i - 1];
	}
	for (int i = 0; i <ArSize; i++)
	{
		cout.setf(ios_base::fixed, ios_base::floatfield);
		cout << i << "! = " << factorial[i] << endl;
	}
	return 0;
}