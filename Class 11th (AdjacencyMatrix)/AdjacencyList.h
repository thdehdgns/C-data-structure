#pragma once
#include <iostream>
using namespace std;
#define SIZE 10
template<typename T>
class AdjacencyList
{
private:
	int size; // 정점의 개수
	struct Node
	{
		T data;
		Node* next;

		Node(T data, Node* link = nullptr)
		{
			this->data = data;
			next = link;
		}
	};
	T vertex[SIZE]; //정점의 집합
	Node* list[SIZE];

public:

	AdjacencyList()
	{
		size = 0;
		for (int i = 0; i < SIZE; i++)
		{
			list[i] = NULL;
			vertex[i] = NULL;
		}
	}

	void push(T data)
	{
		if (size >= SIZE)
		{
			cout << "Adjacency List is Overflow " << endl;
		}
		else
		{
			vertex[size++] = data;

		}
	}

	void edge(int i, int j)
	{
		if (size <= 0)
		{
			cout << "Adjacency List is Emtpy" << endl;

		}
		else if (i >= size || j >= size)
		{
			cout << "index Out of Range" << endl;
		}
		else
		{
			list[i] = new Node(vertex[j], list[i]);
			list[j] = new Node(vertex[i], list[j]);

		}
	}

	~AdjacencyList()
	{
		for (int i = 0; i < SIZE; i++)
		{
			if (list[i] != nullptr)
			{
				delete[] list[i];
			}
		}
	}

};

