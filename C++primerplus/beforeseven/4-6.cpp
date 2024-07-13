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
	CandyBar snack[3] =
	{
		{"Mocha Munch",2.3,350},
		{"Defu",1.01,200},
		{"qiaolezi",1.50,275}
	};
	cout << snack[1].brand << "," << snack[1].weight << "," << snack[1].calorie << endl;
}