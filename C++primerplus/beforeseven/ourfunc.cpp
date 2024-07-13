#include<iostream>
void simon(int);
int main()
{
	using namespace std;
	simon(3);
	cout << "pick an integer: ";
	int count;
	cin >> count;
	simon(count);
	cout << "Done!!!" << endl;
	return 0;
}
void simon(int x)
{
	using namespace std;
	cout << "Simon says touch your toes " << x << " times." << endl;
}