#include<iostream>
#include "tabtenn0.h"

int main()
{
	using std::cout;
	TableTennisPlayer player1("chuck", "Blizzard", true);   //const char* 类型通过之前的带一个参数的构造函数进行类型转换。
	TableTennisPlayer player2("Tara", "Boomdea", false);
	player1.Name();
	if (player1.HasTable())
		cout << ": has a table.\n";
	else
		cout << ": hasn't a table.\n";
	player2.Name();
	if (player2.HasTable())
		cout << ": has a table.";
	else
		cout << ": hasn't a table.\n";
	return 0;
}