#include<iostream>
#include<iomanip>
int main()
{
	using namespace std;
	int nights = 1001;
	int* pt = new int;
	*pt = 1001;
	cout << "nights value = " << nights << ": location " << &nights << endl;
	cout << "int value = " << *pt << ": location = " << pt << endl;
	double* pd = new double;
	*pd = 10000001.0;
	cout << "double value = " <<setprecision(17)<< *pd+9 << ": location = " << pd << endl;
	cout << "size of pt = " << sizeof pt << ": size of *pt = " << sizeof * pt << endl;
	cout << "size of pd = " << sizeof pd << ": size of *pd = " << sizeof * pd << endl;
}