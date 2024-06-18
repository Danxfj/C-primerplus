#include<iostream>
#include<cstring>
//#pragma warning(disable:4996)
int main()
{
	using namespace std;
	char animal[20] = "bear";
	const char* bird = "wren";
	char* ps;

	cout << animal << " and " << bird << "\n";
	cout << "Enter a kind of animal: ";
	cin >> animal;
	ps = animal;
	cout << animal << "\n" << endl;
	cout << "before using strcpy(): " << endl;
	cout << animal << " at " << (int*)animal << endl;
	cout << ps << " at " << (int*)ps << endl;

	ps = new char[strlen(animal)+1];
	strcpy_s(ps,10, animal);
	cout << "after using strcpy(): " << endl;
	cout << animal << " at " << (int*)animal << endl;
	cout << ps << " at " << (int*)ps << endl;
	delete [] ps;
	return 0;
}