#include<iostream>
int main()
{
	using namespace std;
	int updates = 6;
	int *p_updates;
	p_updates = &updates;

	cout << "Values: updates = " << updates;
	cout << ", *p_updates = " << *p_updates << endl;

	cout << "Address: &updates = " << &updates;
	cout << ", p_updates = " << p_updates << endl;

	updates = *p_updates + 1;
	cout << "Now updates = " << *p_updates;

}