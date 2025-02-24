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
		front = 0;
		rear = 0;
		for (int i = 0; i < SIZE; i++)
		{
			container[i] = NULL;
		}
	}
};

