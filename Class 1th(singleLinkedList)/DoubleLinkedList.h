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
		Node* next;
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
		newNode->data = data;
		newNode->next = nullptr;
		newNode->previous = nullptr;

		if (head == nullptr)
		{
			head = newNode;
			tail = newNode;
		}
		else
		{
			head->previous = newNode;
			newNode->next = head;

			head = newNode;
		}
		size++;
	}

	void show()
	{
		if (head == nullptr)
		{
			cout << "Empty List" << endl;
		}
		else if (head != nullptr)
		{
			Node* currentNode = head;

			while (currentNode != nullptr)
			{
				cout << currentNode->data << endl;
				currentNode = currentNode->next;

			}
		}
	}


	void pop_front()
	{
		if (head == nullptr)
		{
			cout << "Linked list is empty" << endl;
		}
		else 
		{
			Node* deleteNode = head;

			if (head == tail)
			{
				head = nullptr;
				tail = nullptr;
			}
			else
			{
				deleteNode->next->previous = nullptr;
				head = head->next;
			}

			delete deleteNode;

			size--;

		}


	}


	void push_back(T data)
	{
		Node* newNode = new Node;
		newNode->data = data;
		newNode->next = nullptr;
		newNode->previous = nullptr;

		if (head == nullptr)
		{
			head = newNode;
			tail = newNode;
		}
		else
		{
			tail->next = newNode;
			newNode->previous = tail;

			tail = newNode;
		}
		size++;
	}

	~DoubleLinkedList()
	{
		while (head != nullptr)
		{
			pop_front();
		}
	}

};

