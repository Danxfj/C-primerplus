#include<iostream>
using namespace std;
int main()
{
	double distance, petroleum;
	cout << "Enter distance: ";
	cin >> distance;
	cout << "Enter petroleum used: ";;
	cin >> petroleum;
	cout << "need " << 100 * petroleum / distance << "liter petroleum per 100 kilometers;\n";
}