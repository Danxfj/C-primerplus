#include"iostream"
struct CandyBar
{
	char brand[30];
	double weight;
	int calorie;
};
int main()
{
	CandyBar snack{ "Mocha Munch",2.3,350 };
	std::cout << "the brand of this snake is: " << snack.brand << "\n"
		<< "the weight: " << snack.weight << "\n"
		<< "the calorie: " << snack.calorie << "\n";
	return 0;
}