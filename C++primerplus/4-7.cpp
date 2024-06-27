#include<iostream>
#include<string>
struct Pizza
{
	std::string brand;
	double diameter;
	double weight;
};
int main()
{
	using namespace std;
	Pizza p1;
	cout << "Enter the brand of Pizza company: ";
	cin >> p1.brand;
	cout << "Enter the diameter of Pizza: ";
	cin >> p1.diameter;
	cout << "Enter the weight of Pizza: ";
	cin >> p1.weight;

	cout << p1.brand << "," << p1.diameter << "," << p1.weight << endl;
}