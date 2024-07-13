#include<iostream>
#include<array>
int main()
{
	using namespace std;
	array<double, 3> score;
	cout << "Enter the first score: ";
	cin >> score[0];
	cout << "Enter the second score: ";
	cin >> score[1];
	cout << "Enter the third score: ";
	cin >> score[2];
	double total = score[0] + score[1] + score[2];
	double average = total / 3;
	cout << score.size() << " times average: " << average << endl;
	return 0;
}