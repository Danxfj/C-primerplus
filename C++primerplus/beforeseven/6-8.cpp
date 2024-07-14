#include<iostream>
#include<fstream>
#include<cstdlib>
/*#include <direct.h>
#define GetCurrentDir _getcwd*/
int main()
{
	using namespace std;

	/*char cCurrentPath[FILENAME_MAX];

	if (!GetCurrentDir(cCurrentPath, sizeof(cCurrentPath))) {
		std::cerr << "Error getting current directory" << std::endl;
		return errno;
	}

	cCurrentPath[sizeof(cCurrentPath) - 1] = '\0'; // null-terminate the string

	std::cout << "The current working directory is " << cCurrentPath << std::endl;*/
	ifstream inFile;
	char name[100] = "E:\\C++Script\\vs2022project\\C++primerplus\\C++primerplus\\beforeseven\\scores.txt";
	inFile.open(name);

	if (!inFile.is_open())
	{
		cout << "can't open file " << name << endl;
		exit(EXIT_FAILURE);
	}

	char ch;
	int count = 0;
	while (inFile.get(ch))
	{
		cout << ch;
		count++;
	}
	if (inFile.eof())
	{
		cout << "reach the end of file."<<endl;
		cout << "there are " << count << " characters." << endl;
	}
	inFile.close();
	return 0;
}