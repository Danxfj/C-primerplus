#include<iostream>
const int ArSize = 6;
int main()
{
	using namespace std;

	cout << "Enter the NAAQs (New Age Awareness Quotients) "
		"of\n your neighbors. Program terminates when you make"
		"\n6 entries or enter a nagative value.";
	float naaq[ArSize];
	int i=0;
	float temp;
	cout << "First value: ";
	cin >> temp;
	while (temp > 0 && i < ArSize)
	{
		naaq[i] = temp;
		i++;
		if (i < ArSize)
		{
			cout << "Next value: ";
			cin >> temp;
		}
	}
	if (i == 0)
		cout << "No data--bye\n";
	else
	{
		float you;
		cout << "Enter your NAAQ: ";
		cin >> you;
		int count = 0;
		for (int j = 0; j < i; j++)
		{
			if (naaq[j] > you)
			{
				count++;
			}
		}
		cout << count;
		cout << " of your neighbors have greater awareness of\n"
			<< "the New Age than you do.\n";
	}
	return 0;
}