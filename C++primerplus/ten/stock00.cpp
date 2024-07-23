#include<iostream>
#include "stock00.h"

void Stock::acquire(const std::string& co, long n, double pr)
{
	company = co;
	if (n < 0)
	{
		std::cout << "number of shares can't be negative; "
			<< company << " shares set to 0 \n";
		shares = 0;
	}
	else
		shares = n;
	share_val = pr;
	set_tot();
}

void Stock::buy(long number, double price)
{
	if (number < 0)
	{
		std::cout << "number of shares purchased can't be negative "
			<< "transaction is aborted.\n";
	}
	else
	{
		shares += number;
		share_val = price;
		set_tot();
	}
}

void Stock::sell(long number, double price)
{
	using std::cout;
	if (number < 0)
	{
		cout << "number of shares selled can't be nagetive "
			<< "transaction is aborted.\n";
	}
	else if (number > shares)
	{
		cout << "Can't sell shares more than you have "
			<< "transction is aborted.\n";
	}
	else
	{
		shares -= number;
		share_val = price;
		set_tot();
	}
}

void Stock::update(double price)
{
	share_val = price;
	set_tot();
}

void Stock::show()
{
	using std::cout;
	using std::ios_base;

	ios_base::fmtflags orig = cout.setf(ios_base::fixed, ios_base::floatfield);
	std::streamsize prec = cout.precision(3);

	std::cout << "Company: " << company
		<< "		Shares: " << shares << '\n'
		<< "		Share Price: $" << share_val;
		cout.precision(2);
		cout<< "		Total Worth: $" << total_val << '\n';

		cout.setf(orig, ios_base::floatfield);
		cout.precision(prec);
}