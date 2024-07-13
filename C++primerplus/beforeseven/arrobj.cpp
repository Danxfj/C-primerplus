#include<iostream>
#include<string>
#include<array>
using namespace std;
const int season = 4;
const array<string, season> Season =
{"Spring","summer","autumn","winter"};
void fillarr(array<double, season>* pa);
void showarr(const array<double, season> da);
int main()
{
	array<double, season> expenses;
	fillarr(&expenses);
	showarr(expenses);
	return 0;
}
void fillarr(array<double, season>* pa)
{
	for (int i = 0; i < season; i++)
	{
		cout << "Enter " << Season[i] << " expenses: ";
		cin >> (*pa)[i];
	}
}
void showarr(const array<double, season> da)
{
	double total = 0.0;
	cout << "\nEXPENSES\n";
	for (int i = 0; i < season; i++)
	{
		cout << Season[i] << ": $" << da[i] << endl;;
		total += da[i];
	}
	cout << "Total Expenses: $" << total << endl;
}