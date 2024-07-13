#include<iostream>
const int convert = 60;   //×ª»»Òò×Ó
int main()
{
	using namespace std;
	double degree, minutes, seconds;
	cout << "Enter a latitude in degree,minutes, and seconds" << endl;
	cout << "First, enter the degrees: ";
	cin >> degree;
	cout << "Next,enter the minutes of arc: ";
	cin >> minutes;
	cout << "Finally, enter the seconds of arc: ";
	cin >> seconds;
	double total = degree + minutes / convert + seconds / (convert * convert);
	cout << degree << " degrees, " << minutes << " minutes, " << seconds << " seconds " << " = " << total << " degrees" << endl;
}