#include<iostream>
using namespace std;
struct CandyBar
{
	char brand[30];
	double weight;
	int calorie;
};
int main()
{
	CandyBar* pt = new CandyBar[3]
	{
		{"Mocha Munch",2.3,350},
		{"Defu",1.01,200},
		{"qiaolezi",1.50,275}
	};
	cout << pt[1].brand << "," << (pt+1)->weight<< "," << (*(pt+1)).calorie<< endl;
	delete[] pt;
}