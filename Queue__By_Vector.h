#ifndef _QUEUEBYVECTOR_
#define _QUEUEBYVECTOR_
#include <vector>

template<typename T>
class Queue
{
private:
	std::vector<T> queue;
public:
	Queue() {}

	void enqueue(int value)
	{
		queue.push_back(value);
	}

	void dequeue()
	{
		queue.erase(queue.begin());
	}

	T getFront()
	{
		return queue.at(0);
	}

	bool isEmpty()
	{
		return (queue.size() == 0);
	}
};
#endif