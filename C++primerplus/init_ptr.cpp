#include<iostream>
int main()
{
	using namespace std;
	int hinge = 5;
	int* ptr = &hinge;
	cout << "Value of higgens = " << hinge;
	cout << "; Address of higgens = " << &hinge << endl;

	cout << "Value of *ptr = " << *ptr;
	cout << "; Value of ptr = " << ptr<<endl;
	return 0;
}