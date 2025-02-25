#pragma once
#include <iostream>
using namespace std;
#define SIZE 4
template<typename T>
class circleQueue
{
private:
	T container[SIZE];
	int rear;
	int front;

public:
	circleQueue()
	{
		front = SIZE - 1;
		rear = SIZE - 1;
		for (int i = 0; i < SIZE; i++)
		{
			container[i] = NULL;
		}
	}


	void push(T data)
	{
		if (front == (rear +1) % SIZE)
		{
			cout << "Circle Queue Overflow" << endl;
		}
		else
		{
			rear = (rear + 1) % SIZE;

			container[rear] = data;
		}
	}

	void pop()
	{
		if (empty())
		{
			cout << "Circle Queue is Empty" << endl;

		}
		else
		{
			front = (front + 1) % SIZE;
			container[front] = NULL;
		}
	}

	const T& Front()
	{
		return container[(front + 1) % SIZE];
	}

	bool empty()
	{
		if (front == rear)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
};

