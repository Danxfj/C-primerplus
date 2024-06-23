#include<iostream>
#include<fstream>
#include <direct.h>
#define GetCurrentDir _getcwd
int main()
{
	using namespace std;

	char automobile[50];
	int year;
	double a_price;
	double d_price;

	ofstream outFile;
	outFile.open("carinfo.txt");

	char cCurrentPath[FILENAME_MAX];

	if (!GetCurrentDir(cCurrentPath, sizeof(cCurrentPath))) {
		std::cerr << "Error getting current directory" << std::endl;
		return errno;
	}

	cCurrentPath[sizeof(cCurrentPath) - 1] = '\0'; // null-terminate the string

	std::cout << "The current working directory is " << cCurrentPath << std::endl;

	cout << "Enter the make and model of automobile: ";
	cin.get(automobile, 50);
	cout << "Enter the model year: ";
	cin >> year;
	cout << "Enter the original asking price: ";
	cin >> a_price;
	d_price = 0.913 * a_price;

//display information on screen with cout
	cout << fixed;
	cout.precision(2);
	cout.setf(ios_base::showpoint);
	cout << "Make and model: " << automobile << endl;
	cout << "Year: " << year << endl;
	cout << "Was asking $" << a_price << endl;
	cout << "Now asking $" << d_price << endl;

//now do exact same things using outFile instead of cout
	outFile << fixed;
	outFile.precision(2);
	outFile.setf(ios_base::showpoint);
	outFile << "Make and mmodel: " << automobile << endl;
	outFile << "Year: " << year << endl;
	outFile << "Was asking $" << a_price << endl;
	outFile << "Now asking $" << d_price << endl;

	outFile.close();
	return 0;
}