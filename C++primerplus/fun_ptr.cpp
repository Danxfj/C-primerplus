#include<iostream>
double betesy(int);
double pam(int);

void estimate(int line, double (*pf)(int));
int main()
{
	using namespace std;
	int line;
	cout << "How many lines of code do you need? ";
	cin >> line;
	cout << "Here's Betsy's estimate:\n";
	estimate(line, betesy);
	cout << "Here's Pam's estimmate:\n";
	estimate(line, pam);
	return 0;
}
double betesy(int ln)
{
	return ln * 0.05;

}
double pam(int ln)
{
	return ln * 0.03 + ln * 0.0004 * ln;
}
void estimate(int line, double (*pf)(int))
{
	std::cout << line << " lines will take ";
	std::cout << (*pf)(line) << " hour(s)\n";
}