#include<iostream>
#include<string>
#include<cctype>

int main()
{
	using namespace std;
	string str;
	char ch;
	while (cin.get(ch)&&ch!='@')
	{
		str += ch;
	}
	int n = str.size() - 1;
	for (n; n >= 0; n--)
	{
		if ('0' <= str[n] && str[n] <= '9')
			continue;
		else
		{
			if (str[n] >= 'a' && str[n] <= 'z')
			{
				str[n]=toupper(str[n]);
			}
			else if (str[n] >= 'A' && str[n] <= 'Z')
			{
				str[n]=tolower(str[n]);
			}
			cout << str[n];
		}
	}

	return 0;
}