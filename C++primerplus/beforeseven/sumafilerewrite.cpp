#include<iostream>
#include<cstdlib>
#include<fstream>
const int ArSize = 60;



int main()
{
	using namespace std;
	char filename[ArSize];
	cin.getline(filename, ArSize);

	int count = 0;
	double sum = 0;

	fstream inFile;
	inFile.open("scores.txt");
	if (!inFile.is_open())
	{
		cout << "The file " << filename << " can't open." << endl;
		cout << "program terminate.\n";
		exit(EXIT_FAILURE);
	}
	double score;
	
	while (inFile >> score)
	{
		count++;
		sum += score;
	}
	if (inFile.eof())
	{
		cout << "reach the end of file." << endl;
	}
	else if (inFile.fail())
	{
		cout << "input is mismatch the type " << endl;
	}
	else
	{
		cout << "Unkonwn situation happen " << endl;
	}

	if (count == 0)
	{
		cout << "no input" << endl;
	}
	else
	{
		cout << "Item read: " << count << endl;
		cout << "sum " << sum << endl;
		cout << "Average " << sum / count << endl;
	}
	return 0;
}