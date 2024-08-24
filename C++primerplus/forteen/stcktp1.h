#pragma once
template<class Type>
class Stack{
private:
	enum{SIZE = 10};
	int top=0;
	Type* items;
	int stackSize;
public:
	Stack(int ss = SIZE);
	Stack(const Stack& st);
	~Stack() { delete[] items; }
	bool isempty() { return top == 0; }
	bool isfull() { return top == stackSize; }
	bool push(const Type& item);
	bool pop(Type& item);
	Stack& operator=(const Stack& st);
};
template<class Type>
Stack<Type>::Stack(int ss) : stackSize(ss) 
{
	items = new Type[stackSize];
}

template<class Type>
Stack<Type>::Stack(const Stack& st)
{
	stackSize = st.stackSize;
	top = st.top;
	items = new Type[stackSize];
	for (int i = 0; i < stackSize; i++)
	{
		items[i] = st.items[i];
	}
}

template<class Type>
bool Stack<Type>::push(const Type& item)
{
	if (top < stackSize)
	{
		items[top++] = item;
		return true;
	}
	else
		return false;
}

template<class Type>
bool Stack<Type>::pop(Type& item)
{
	if (top > 0)
	{
		item = items[--top];
		return true;
	}
	else
		return false;
}

template<class Type>
Stack<Type>& Stack<Type>::operator=(const Stack<Type>& st)
{
	if (this == &st)
		return *this;
	delete[] items;
	stackSize = st.stackSize;
	top = st.top;
	items = new Type[stackSize];
	for (int i = 0; i < top; i++)
		items[i] = st.itmes[i];
	return *this;
}
