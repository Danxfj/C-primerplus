#include<iostream>
const int ArSize = 66;
const int depth = 6;
void subordinate(char ar[],int low,int high,int dep);
int main()
{
	using namespace std;
	char ruler[ArSize];
	ruler[ArSize - 1] = '\0';
	int min = 0;
	int max = ArSize - 2;
	for (int i = 1; i < max; i++)
	{
		ruler[i] = ' ';
	}
	ruler[min] = '|';
	ruler[max] = '|';

	cout << ruler << endl;

	for (int i = 1; i <= depth; i++)
	{
		subordinate(ruler, min, max, i);
		cout << ruler << endl;
		for (int j = 1; j < max; j++)
			ruler[j] = ' ';
	}
	cin.get();
	return 0;
}
void subordinate(char ar[], int low, int high, int dep)
{
	if (dep == 0)
		return;
	else
	{
		int mid = (high+low)/2;
		ar[mid] = '|';
		dep--;
		subordinate(ar, low, mid, dep);
		subordinate(ar, mid, high, dep);
	}
}
