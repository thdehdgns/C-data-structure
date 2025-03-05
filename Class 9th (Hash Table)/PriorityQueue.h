#pragma once
#include <iostream>
using namespace std;
#define SIZE 8
template <typename T>
class PriorityQueue
{
private:
	T* container[SIZE];
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

};

