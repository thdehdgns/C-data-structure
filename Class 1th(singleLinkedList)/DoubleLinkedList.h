#pragma once
#include <iostream>
using namespace std;
template<typename T>
class DoubleLinkedList
{
private:
	int size;
	struct Node
	{
		T data;
		Node* Next;
		Node* previous;

	};
	Node* head;
	Node* tail;

public:

	DoubleLinkedList()
	{
		head = nullptr;
		tail = nullptr;
		size = 0;
	}

	void push_front(T data)
	{
		Node* newNode = new Node;
		if (head == nullptr)
		{
			head = newNode;
			tail = newNode;
			head->data = data;
			head->Next = nullptr;
			head->previous = nullptr;
		}
		else if (head != nullptr)
		{
			newNode->data = data;
			newNode->Next = head;
			head = newNode;
			head->Next = tail;
			tail->previous = head;
		}
		size++;
	}

};

