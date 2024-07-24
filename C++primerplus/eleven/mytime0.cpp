#include<iostream>
#include "mytime0.h"

Time::Time()
{
	hour = minutes = 0;
}

Time::Time(int h, int m)
{
	hour = h;
	minutes = m;
}

void Time::addHour(int h)
{
	hour += h;
}

void Time::addMinutes(int m)
{
	minutes += m;
	hour += minutes / 60;
	minutes = minutes % 60;
}

void Time::reset(int h, int m)
{
	hour = h;
	minutes = m;
}

Time Time::sum(const Time& t) const
{
	Time Sum;
	Sum.minutes = minutes + t.minutes;
	Sum.hour = hour + t.hour + Sum.minutes / 60;
	Sum.minutes = Sum.minutes % 60;
	return Sum;
}

void Time::show() const
{
	using std::cout;
	cout << hour << " hours, " << minutes << " minutes";
}