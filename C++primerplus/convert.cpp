#include<iostream>
int stonetolb(int);
int main()
{
	using namespace std;
	cout << "enter the weight in stone: ";
	int stone;
	cin >> stone;
	stonetolb(stone);
	cout << stone << " stone " << "equal " << stonetolb(stone) << " pounds" << endl;
}
int stonetolb(int n)
{
	return 14 * n;
}