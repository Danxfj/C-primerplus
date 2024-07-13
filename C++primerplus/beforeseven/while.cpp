#include<iostream>
const int ArSize = 20;
int main()
{
	using namespace std;
	/*char name[ArSize];
	cout << "Your first name.please: ";
	cin >> name;
	cout << "Here is your name. verticalized and ASCALLzed: \n";
	int i = 0;
	while (name[i])
	{
		cout << name[i] << " : " << int(name[i]) << endl;
		i++;
	}
	return 0;*/
	string name;
	cout << "Your first name. please: ";
	cin >> name;
	cout << "Here is your name. verticalized and ASCALLzed: \n";
	int i = 0;
	long count = 0;
	while (count < 1000000000)
	{
		count++;
	}
	while (name[i])
	{
		cout << name[i] << " : " << int(name[i]) << endl;
		i++;
	}
	return 0;
}