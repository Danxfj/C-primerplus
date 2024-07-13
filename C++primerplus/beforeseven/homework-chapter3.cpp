/*#include<iostream>
#include<string>
struct Fish {
	std::string breed;
	int weight;
	float length;
};
int main()
{
	Fish* fish = new Fish;
	fish->breed = "bass";
	fish->weight = 2.54;
	fish->length = 20;
	std::cout << fish->breed << " : weight: " << fish->weight << " length: " << fish->length << std::endl;
	delete fish;
}*/
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	/*cout << "please input a integer which is positive: ";
	int input;
	cin >> input;
	int* ps = new int[input];
	
	vector<int> vt(input);*/
	char address[80];
	cin.get(address, 80);
	cout << address;

}