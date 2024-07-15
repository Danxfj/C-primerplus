#include<iostream>
const int ArSize = 10;
int fill_array(int ar[], int n);
void show_array(int* ar, int n);
float aver_array(int* ar, int n);
int main()
{
	using namespace std;
	int score[ArSize];
	int size = fill_array(score, ArSize);
	show_array(score, size);
	float a = aver_array(score, size);
	cout << a << endl;
}
int fill_array(int ar[], int n)
{
	using namespace std;
	int i = 0;

	cout << "You can enter up to " << ArSize;
	cout << " golf scores (q to terminate)." << endl;

	cout << "Golf scores #1: ";
	while (i < n && cin >> ar[i])
	{
		if (++i < ArSize)
		{
			cout << "Golf scores #" << i + 1 << ": ";
		}
	}
	return i;
}
void show_array(int* ar, int n)
{
	for (int i = 0; i < n; i++)
	{
		std::cout << ar[i] << " ";
	}
	std::cout << std::endl;
}
float aver_array(int* ar, int n)
{
	float total = 0.0;
	for (int i = 0; i < n; i++)
	{
		total += ar[i];
	}
	return total / n;
}