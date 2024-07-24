#pragma once
class Time
{
private:
	int hour;
	int minutes;
public:
	Time();
	Time(int h, int m = 0);
	void addHour(int h);
	void addMinutes(int m);
	void reset(int h = 0, int m = 0);
	Time sum(const Time& t) const;
	void show() const;

};
