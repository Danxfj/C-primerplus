#include<iostream>

void showmenu();
int main()
{
	using namespace std;
	char ch;
	bool isend = false;
	showmenu();
	cout << endl;
	while (!isend && cin >> ch)
	{
		switch (ch)
		{
		case 'c': cout << "carnivore don't eat their children;"; isend=1; break;
		case 'p': cout << "My mother is a pianist;"; isend=1; break;
		case 't': cout << "A maple is a tree;"; isend=1; break;
		case 'g': cout << "game is my favorite project;"; isend=1; break;
		default:  cout << "please enter a c,p,t,or g: "; break;
		}
	}
}

void showmenu()
{
	std::cout << "Please enter one of the following choices\n"
		<< "c) carnivore			p) pianist\n"
		<< "t) tree				g) game";
}