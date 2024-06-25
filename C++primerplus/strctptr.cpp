#include<iostream>
#include<cmath>
struct rect
{
	double x;
	double y;
};
struct polar
{
	double distance;
	double angle;
};
void rec_to_polar(const rect* pxy, polar* pda);
void show_polar(const polar* pda);
int main()
{
	using namespace std;
	rect rplace;
	polar pplace;
	cout << "Enter the x and y value: ";
	while (cin >> rplace.x >> rplace.y)
	{
		rec_to_polar(&rplace, &pplace);
		show_polar(&pplace);
		cout << "Next two numbers (q to quit): ";
	}
	cout << "Done!" << endl;
	return 0;
}

//show polar coordinates,converting angle to degree
void show_polar(const polar* pda)
{
	using namespace std;
	const double rad_to_deg = 57.29577951;

	cout << "distance = " << pda->distance;
	cout << ", angle = " << pda->angle * rad_to_deg;
	cout << " degrees\n";
}
void rec_to_polar(const rect* pxy, polar* pda)
{
	using namespace std;
	pda->angle = atan2(pxy->y, pxy->x);
	pda->distance = sqrt(pxy->x * pxy->x + pxy->y * pxy->y);
}