#include<iostream>
const int ArSize = 80;
int main()
{
	using namespace std;
	char ch[ArSize];
	cout << "Enter a line of text : \n";
	cin.get(ch, ArSize);
	int space = 0;

	cout << "Complete line: \n";
	cout << ch;
	cout << "\nLine through first period: ";
	for (int i = 0; ch[i] != '\0'; i++)
	{
		if (ch[i] != '.')
			cout << ch[i];
		else if (ch[i] == '.')
		{
			cout << endl;
			break;
		}
		if (ch[i] != ' ')
			continue;
		space++;
	}
	cout << space << " spaces\n";
	cout << "Done\n";
}