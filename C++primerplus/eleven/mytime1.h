#pragma once
class Time
{
private:
	int hours;
	int minutes;
public:
	Time();
	Time(int h, int m=0);
	void addHr(int h);
	void addMin(int m);
	void Reset(int h = 0, int m = 0);
	Time operator+(const Time& t) const;
	void show() const;
};
