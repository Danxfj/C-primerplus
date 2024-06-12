#include<iostream>
using namespace std;
void display(int, int);
int main()
{
	cout << "please input the number of hour: ";
	int hour;
	cin >> hour;
	cout << "input the number of minutes: ";
	int minutes;
	cin >> minutes;
	display(hour, minutes);
}
void display(int hour, int minutes)
{
	cout << "Time: " << hour << ";" << minutes << endl;
}