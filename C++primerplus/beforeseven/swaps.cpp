#include<iostream>
void swapr(int& a, int& b);
void swapp(int* a, int* b);
void swapv(int a, int b);
int main()
{
	using namespace std;
	int wallet1 = 300;
	int wallet2 = 350;

	cout << "wallet1 = $" << wallet1 << " ";
	cout << "wallet2 = $" << wallet2 << endl;

	cout << "Using references to swap contents:" << endl;
	swapr(wallet1, wallet2);
	cout << "wallet1 = $" << wallet1 << " ";
	cout << "wallet2 = $" << wallet2 << endl;

	cout << "Using pointers to swap contents again:" << endl;
	swapp(&wallet1, &wallet2);
	cout << "wallet1 = $" << wallet1 << " ";
	cout << "wallet2 = $" << wallet2 << endl;

	cout << "Trying to use passing by value:" << endl;
	swapv(wallet1, wallet2);
	cout << "wallet1 = $" << wallet1 << " ";
	cout << "wallet2 = $" << wallet2 << endl;
}
void swapr(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}
void swapp(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
void swapv(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}