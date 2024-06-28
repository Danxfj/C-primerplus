#include<iostream>
#include<string>
struct car {
	std::string company;
	int data;
};
int main()
{
	using namespace std;
	int number;
	cout << "How many cars do you wish to catalog? ";
	cin >> number;
	cin.get();
	car* pt = new car[number];
	for (int i = 0; i < number; i++)
	{
		cout << "Car #" << i + 1 << endl;
		cout << "Please enter the make: ";
		getline(cin, (pt+i)->company);
		cout << "Please enter the year made: ";
		cin >> pt[i].data;
		cin.get();
	}
	cout << "Here is your collection: " << endl;
	for (int j = 0; j < number; j++)
	{
		cout << pt[j].data << " " << (pt + j)->company << endl;
	}
	delete[] pt;
	return 0;
}