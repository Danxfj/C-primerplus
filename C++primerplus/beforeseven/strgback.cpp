#include<iostream>
char* bulidstr(char c,int n);
int main()
{
	using namespace std;
	char ch;
	int n;
	cout << "Enter a character: ";
	cin >> ch;
	cout << "Enter a integer: ";
	cin >> n;
	char* ps = bulidstr(ch, n);
	cout << ps << endl;
	delete[] ps;
	ps = bulidstr('+' , 20);
	cout << ps << "-DONE-" << ps << endl;
	delete[] ps;
	return 0;
}
char* bulidstr(char c, int n)
{
	char* pstr = new char[n+1];
	pstr[n] = '\0';
	while (n-- > 0)
	{
		pstr[n] = c;
	}
	return pstr;
}