#pragma once
#include <iostream>
using namespace std;
#define SIZE 8
template <typename T>
class PriorityQueue
{
private:
	T container[SIZE];
	int index;

public:

	PriorityQueue()
	{
		index = 0;

		for (int i = 0; i < SIZE; i++)
		{
			container[i] = NULL;
		}
	}

	void push(T data)
	{

		if (index + 1 >= SIZE)
		{
			cout << "overflow" << endl;
		}
		else
		{
			container[++index] = data;
			int child = index;
			int parent = child/2;

			while (child > 1)
			{
				if (container[parent] < container[child])
				{
					swap(container[parent], container[child]);
				}

				child = parent;
				parent = child / 2;
			}
		}

	}

	const T& Top()
	{
		return container[1];
	}

	void pop()
	{
		if (index <= 0)
		{
			cout << "Priority Queue is Empty" << endl;
		}
		else
		{
			container[1] = container[index];

			container[index--] = NULL;

			int parent = 1;

			while (parent * 2 <= index)
			{
				int child = parent * 2;

				if (container[child] < container[child + 1])
				{
					child++;
				}

				if (container[child] < container[parent])
				{
					break;
				}
				else
				{
					std::swap(container[parent], container[child]);

					parent = child;
				}
			}
		}
	}

	const bool empty()
	{
		if (index <= 0)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	
};

