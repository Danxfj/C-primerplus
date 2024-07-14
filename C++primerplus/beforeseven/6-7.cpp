#include<iostream>
int main()
{
	using namespace std;
	string str;
	int vowels = 0;
	int consonants = 0;
	int others = 0;
	cout << "Enter words (q to quit): ";
	while (cin >> str && str != "q")
	{
		if (isalpha(str[0]))
		{
			if (str[0] == 'a' || str[0] == 'A' || str[0] == 'e' || str[0] == 'E' || str[0] == 'i' || str[0] == 'I' || str[0] == 'o' || str[0] == 'O' || str[0] == 'u' || str[0] == 'U')
			{
				vowels++;
			}
			else
			{
				consonants++;
			}
		}
		else
			others++;
	}

	cout << vowels << " words beginning with vowels" << endl;
	cout << consonants << " words beginning with consonants" << endl;
	cout << others << " others" << endl;
	return 0;
}