#pragma once

typedef unsigned long Item;

class Stack
{
private:
	enum {size=10};
	Item items[size];
	int top;
public:
	Stack();
	bool isempty() const;

	bool isfull() const;

	bool push(const Item& item);

	bool pop(Item& item);
};
