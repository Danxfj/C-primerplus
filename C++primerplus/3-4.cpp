#include<iostream>

const int day_to_hour = 24;
const int hour_to_minutes = 60;
const int minute_to_seconds = 60;

int main()
{
	long long seconds;
	using namespace std;
	cout << "Enter the number of seconds: ";
	cin >> seconds;
	long long days, hours, minutes, rem1, rem2, rem3;
	days = seconds / (day_to_hour * hour_to_minutes * minute_to_seconds);
	rem1 = seconds - (days * day_to_hour * hour_to_minutes * minute_to_seconds);
	hours = rem1 / (hour_to_minutes * minute_to_seconds);
	rem2 = rem1 - (hours * hour_to_minutes * minute_to_seconds);
	minutes = rem2 / minute_to_seconds;
	rem3 = rem2 - (minutes * minute_to_seconds);
	cout << seconds << " seconds = " << days << " days, " << hours << " hours, " << minutes << " minutes, " << rem3 << " seconds" << endl;
}