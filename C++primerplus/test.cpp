#include<iostream>
using namespace std;
int main()
{
	int a = 10;
	int* pt = &a;
	cout << "the value of pt is: " << pt << endl;
	cout << "the value of *pt is: " << *pt << endl;
	cout << "the value of &pt is: " << &pt << endl;
}