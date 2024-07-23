#pragma once
#include<string>

class Stock
{
private:
	std::string company;
	long shares;
	double share_val;
	double tot_val;
	void set_tot() { tot_val = shares * share_val; }
public:
	Stock();
	Stock(const std::string& co, long n=0, double pr=0.0);
	~Stock();
	void buy(long num, double price);
	void sell(long num, double price);
	void update(double price);
	void show() const;
	const Stock& topval(const Stock& s) const;
};

