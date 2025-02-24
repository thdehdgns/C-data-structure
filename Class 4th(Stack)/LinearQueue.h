#pragma once
#include <iostream>
using namespace std;
#define Size 5
template<typename T>
class LinearQueue
{
private:
	T container[Size];
	
	int rear;
	int front;
public:

	LinearQueue()
	{
		
		rear = 0;
		front = 0;
		for (int i = 0; i < Size; i++)
		{
			container[i] = NULL;
		}
	}


	void push(T data)
	{
		if (rear >= Size)
		{
			cout << "rear overflow" << endl;
		}
		else
		{
			container[rear++] = data;
			
		}
	}

	void pop()
	{
		if (Empty() == true)
		{
			cout << "Empty" << endl;
		}
		else if(front <= rear)
		{
			container[front++] = NULL; 
		}
	}

	const T& Front()
	{
		if (Empty())
		{
			cout << "Linear queue is empty" << endl;
		}
		else
		{
			return container[front];

		}
	}

	
	const int& size()
	{
		return rear - front;
	}

	bool Empty()
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

