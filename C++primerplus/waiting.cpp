#include<iostream>
#include<ctime>
using namespace std;
int main()
{
	float sec;
	cout << "Enter the delay time in seconds: ";
	cin >> sec;
	clock_t delay = CLOCKS_PER_SEC * sec;
	clock_t start = clock();
	cout << "start\a\n";
	while (clock() - start < delay);
	cout << "done\a\n" ;
	return 0;
}