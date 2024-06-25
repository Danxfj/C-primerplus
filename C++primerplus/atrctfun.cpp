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

void show_polar(polar dapos);
polar rec_to_polar(rect rpos);
int main()
{
	using namespace std;

	rect rplace;
	polar pplace;
	cout << "Enter the x and y values: ";
	while (cin >> rplace.x >>rplace.y)
	{
		pplace = rec_to_polar(rplace);
		show_polar(pplace);
		cout << "Next two numbers(q to quit): ";
	}
	cout << "Done!";
	return 0;
}
polar rec_to_polar(rect rpos)
{
	using namespace std;
	polar answer;
	answer.distance = sqrt(rpos.x * rpos.x + rpos.y * rpos.y);
	answer.angle = atan2(rpos.y, rpos.x);
	return answer;
}
void show_polar(polar dapos)
{
	using namespace std;
	const double rad_to_deg = 57.29577951;
	cout << "distance = " << dapos.distance;
	cout << ", angle = " << rad_to_deg * dapos.angle;
	cout << " degree\n";
}