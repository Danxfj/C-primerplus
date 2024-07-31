#include<iostream>
#include "tabtenn1.h"

int main()
{
	using std::cout;
	using std::endl;
	TableTennisPlayer player1("Tara", "Boomdea", false);
	RatedPlayer rpplayer1(1140, "Mallory", "Duck", true);
	rpplayer1.Name();      //derived object uses base method
	if (rpplayer1.HasTable())
		cout << ": has a table.\n";
	else
		cout << ": hasn't a table.\n";
	player1.Name();         //base object uses base method
	if (player1.HasTable())
		cout << ": has a table";
	else
		cout << ": hasn't a table.\n";
	cout << "Name: ";
	rpplayer1.Name();
	cout << "; Rating: " << rpplayer1.Rating() << endl;

	//initialize RatedPlayer using TableTennisPlayer object
	RatedPlayer rpplayer2(1212, player1);
	cout << "Name: ";
	rpplayer2.Name();
	cout << "; Rating: " << rpplayer2.Rating() << endl;

	return 0;
}