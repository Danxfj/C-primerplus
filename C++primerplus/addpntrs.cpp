#include<iostream>
int main()
{
	using namespace std;
	double wages[3] = { 1000.0,2000.0,3000.0 };
	short stacks[3] = { 3,2,1 };

	//here are two ways to get the address of an array
	double* pw = wages;      //name of array=address
	short* ps = &stacks[0];  //or use address operator
	
	cout << "pw = " << pw << ", *pw = " << *pw << endl;
	cout << "add 1 to the pw pointer: " << endl;
	pw += 1;
	cout << "pw = " << pw << ", " << "*pw = " << *pw << "\n\n";

	cout << "ps = " << ps << ", *ps = " << *ps << endl;
	cout << "add 1 to the pw pointer: " << endl;
	ps += 1;
	cout << "ps = " << ps << ", " << "*ps = " << *ps << "\n\n";

	cout << "access two elements with array notation" << endl;
	cout << "stacks[0] = " << stacks[0] << ", stacks[1] = " << stacks[1] << endl;
	cout << "access two elments with pointer notation" << endl;
	cout << "*stacks = " << *stacks << ", " << "*(stacks+1) = " << *(stacks + 1) << endl;
	cout << sizeof(wages) << " = size of wages array" << endl;
	cout << sizeof(pw) << " = size of pw pointer" << endl;
}