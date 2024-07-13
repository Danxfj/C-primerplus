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
	Pizza* pt=new Pizza;
	cout << "Enter the diameter of Pizza: ";
	cin >> pt->diameter;
	cout << "Enter the brand of Pizza company: ";   //应该用getline来获取公司名字
	cin.get();
	getline(cin, (*pt).brand);
	cout << "Enter the weight of Pizza: ";
	cin >> pt->weight;

	cout << pt->brand << "," << pt->diameter << "," << pt->weight << endl;
}