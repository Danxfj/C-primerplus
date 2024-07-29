#pragma once
class Stonewt
{
private:
	enum { Lbs_per_stone = 14 };
	int stone;
	double pds_left;
	double pounds;
public:
	Stonewt(double lbs);
	Stonewt(int stone, double lbs);
	Stonewt();
	~Stonewt();
	void show_lbs() const;
	void show_stn() const;

	friend std::ostream& operator<<(std::ostream& os, const Stonewt& a);
	operator int() const;
	operator double() const;
};
