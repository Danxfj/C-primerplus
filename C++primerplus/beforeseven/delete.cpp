#include<iostream>
#include<cstring>
char* getname(void);
using namespace std;
int main()
{
	char* name;
	name = getname();
	cout << name << " at " << (int*)name << endl;
	delete[] name;

	name = getname();
	cout << name << " at " << (int*)name << endl;
	delete[] name;
	return 0;
}
char* getname()
{
	char temp[80];
	cout << "input the last name: ";
	cin >> temp;
	char* pn = new char[strlen(temp) + 1];
	strcpy_s(pn, strlen(temp) + 1, temp);
	return pn;
}