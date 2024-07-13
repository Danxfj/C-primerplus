#include<iostream>
using namespace std;
int main()
{
	float Daphne=100;
	float Cleo=100;
	int i = 1;
	for (i; Daphne >= Cleo; i++)
	{
		Daphne = Daphne+10;
		Cleo = Cleo * 1.05;
	}
	cout << "After " << i-1 << " years success" << endl;
	cout << "The value of Daphne: " << Daphne << endl;
	cout << "The value of Cleo: " << Cleo;
	return 0;
}