#include<iostream>
const int foot_to_inch = 12;
const float inch_to_meter = 0.0254;
const float pound_to_kilogram = 2.2;
int main()
{
	using namespace std;
	int foot, inch;
	cout << "put your height in foot and inch.\nthe foot is: ";
	cin >> foot;
	cout << "the inchs are: ";
	cin >> inch;
	float height = foot * foot_to_inch + inch;
	float BMI_height = height * inch_to_meter;
	cout << "your height is " << BMI_height << " meters"<<endl;

	float pounds;
	cout << "put your weight with pounds: ";
	cin >> pounds;
	float BMI_kilogram = pounds / pound_to_kilogram;
	cout << "your weight is: " << BMI_kilogram << endl;

	cout << "your BMI is " << BMI_kilogram / (BMI_height * BMI_height);

}