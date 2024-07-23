#pragma once
#include<iostream>
#include<string>

class Stock
{
private:
	std::string company;
	long shares;
	double share_val;
	double total_val;
	void set_total() { total_val = shares * share_val; }
public:
	Stock();
	Stock(const std::string& co, long n, double pr);
	~Stock();
	void buy(long n, double pr);
	void sell(long n, double pr);
	void update(double pr);
	void show();
};