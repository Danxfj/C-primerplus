#include<iostream>
int main()
{
	using std::cout;
	using std::cin;

	int space = 0;
	int total = 0;
	char ch;
	cin.get(ch);
	while (ch != '.')
	{
		if (ch == ' ')
		{
			space++;
		}
		total++;
		cin.get(ch);
	}
	cout << "the number of space is " << space << std::endl;
	cout << "characters total in sentence: " << total << '\n';
	return 0;
}