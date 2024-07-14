#include<iostream>
#include<string>
struct Patrons {
	std::string name;
	double donate;
};

int main()
{
	using namespace std;
	int n;
	cout << "enter the number of Patrons: ";
	cin >> n;
	cin.get();
	Patrons* pa = new Patrons[n];
	for (int i = 0; i < n; i++)
	{
		cout << "Enter the name of " << i << " patron: ";
		getline(cin, pa[i].name);
		cout << "Enter the donate of " << i << " patron: ";
		cin >> pa[i].donate;
		cin.get();
	}
	cout << "Grand Patrons: " << endl;

	int grand_amout_n = 0;
	for (int i = 0; i < n; i++)
	{
		if (pa[i].donate > 1000)
		{
			cout << pa[i].name << ' ' << pa[i].donate << endl;
			grand_amout_n++;
		}
	}
	if (grand_amout_n == 0) cout << "None" << endl;
	cout << "Patrons: " << endl;

	bool normal = true;
	for (int i = 0; i < n; i++)
	{
		if (pa[i].donate <= 1000)
		{
			cout << (pa + i)->name << ' ' << (pa + i)->donate << endl;
			normal = false;
		}
	}
	if (normal) cout << "None"<<endl;
	delete[] pa;
	return 0;
}