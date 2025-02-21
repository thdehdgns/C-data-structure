#pragma once
#include <iostream>
using namespace std;
#define Size 5
template<typename T>
class Stack
{
private:
	T container[Size];
	int top;
	int size;
public:
	Stack()
	{
		top = -1;
		size = 0;
		for (int i = 0; i < Size; i++)
		{
			container[i] = NULL;
		}
	}

	void push(T data)
	{
		if (top >= Size-1)
		{
			cout << "Stack overflow" << endl;
		}
		else
		{
			
			container[++top] = data;
		}
	}

	void pop()
	{
		if (Empty() == true)
		{
			cout << "stack is emtpy" << endl;
		}
		else
		{
			
			top--;
		}
	}

	
	bool Empty()
	{
		if (top == -1)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	const T& Top()
	{

		return container[top];
	}

	const int& Sizee()
	{
		size = top + 1;
		return size;
	}

};

