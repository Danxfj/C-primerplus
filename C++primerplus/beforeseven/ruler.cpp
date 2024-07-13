#include<iostream>
const int Div = 6;
const int Len = 66;
void subdivide(char ar[], int low, int high, int level);
int main()
{
	using namespace std;
	char ruler[Len];
	for (int i = 1; i < Len - 2; i++)
	{
		ruler[i] = ' ';
	}
	ruler[Len - 1] = '\0';
	int Max = Len - 2;
	int Min = 0;
	ruler[Max] = '|';
	ruler[Min] = '|';
	cout << ruler << endl;
	for (int i = 1; i <= Div; i++)
	{
		subdivide(ruler, Min, Max, i);
		cout << ruler << endl;
		for (int j = 1; j < Len - 2; j++)
		{
			ruler[j] = ' ';
		}
	}
	return 0;
}
void subdivide(char ar[], int low, int high, int level)
{
	if (level == 0)
		return;
	else
	{
		int mid = (low + high) / 2;
		ar[mid] = '|';
		subdivide(ar, low, mid, level - 1);
		subdivide(ar, mid, high, level - 1);
	}
}