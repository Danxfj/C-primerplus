#pragma once
template <class Item>
class QueueTP
{
private:
	enum{Q_SIZE = 10};
	//Node is a nested class definition
	class Node
	{
	public:
		Item item;
		Node* next;
		Node(const Item& i) :item(i), next(nullptr) {}
	};
	Node* front;
	Node* rear;
	int items;      //current number of items in Queue
	const int qsize; //maximum number of items in Queue
	QueueTP(const QueueTP& q) : qsize(0) {}  //意思是不能使用拷贝构造函数
	QueueTP& operator=(const QueueTP& q) { return *this; }  //意思是不能使用赋值运算符
public:
	QueueTP(int qs = Q_SIZE);
	~QueueTP();
	bool isempty() const
	{
		return items == 0;
	}
	bool isfull() const
	{
		return items == qsize;
	}
	int queuecount() const
	{
		return items;
	}
	bool enqueue(const Item& item);
	bool dequeue(Item& item);
};

template <class Item>
QueueTP<Item>::QueueTP(int qs) :qsize(qs)
{
	front = rear = nullptr;
	items = 0;
}

template<class Item>
QueueTP<Item>::~QueueTP()
{
	Node* temp;
	while (front != nullptr)
	{
		temp = front;
		front = front->next;
		delete temp;
	}
}

template<class Item>
bool QueueTP<Item>::enqueue(const Item& item)
{
	if (isfull())
	{
		return false;
	}
	Node* add = new Node(item);   //create node

	items++;
	if (front == nullptr)
		front = add;
	else
		rear->next = add;
	rear = add;
	return true;
}

//Place front item into item variable and remove from queue
template<class Item>
bool QueueTP<Item>::dequeue(Item& item)
{
	if (front == nullptr)
		return false;
	item = front->item;
	items--;
	Node* temp = front;
	front = front->next;
	delete temp;
	if (items == 0)
		rear = nullptr;
	return true;
}