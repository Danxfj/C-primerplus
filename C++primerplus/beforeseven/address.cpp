#include<iostream>
int main()
{
	using namespace std;
	int donuts = 4;
	double cups = 6.5;

	cout << "donuts value = " << donuts;
	cout << " and donuts address = " << &donuts << endl;

	cout << "cups value = " << cups;
	cout << " and cups address = " << &cups << endl;
	return 0;
}