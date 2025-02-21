#pragma once
#include <iostream>
using namespace std;
template<typename T>
class CircleLinkedList
{
private:
	int size;
	struct Node
	{
		T data;
		Node* next;
		
	};
	Node* head;
public:
	CircleLinkedList()
	{	
		size = 0;
		head = nullptr;
	}

	void push_back(T data)
	{
		Node* newNode = new Node;
		newNode->data = data;
		
		if (head == nullptr)
		{
			head = newNode;

			newNode->next = head;
		}
		else 
		{
			newNode->next = head->next;

			head->next = newNode;

			head = newNode; 
			
		}
		size++;
	}

	void push_front(T data)
	{
		Node* newNode = new Node;
		newNode->data = data;

		if (head == nullptr)
		{
			head = newNode;
			newNode->next = head;
		}
		else
		{
			newNode->next = head->next;
			head->next = newNode;
		}
		
	
		size++;
	}

	void show()
	{
		
		if (head == nullptr)
		{
			cout << "Linked list is empty" << endl;
		}
		else
		{
			Node* currentNode = head->next;
			for (int i = 0; i < size; i++)
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
			cout << "linked list is empty" << endl;
		}
		else
		{
			Node* deleteNode = head->next;
			if (size == 1)
			{
				head = nullptr;
			}
			else
			{
				head->next = head->next->next;
				
			}
			size--;
			delete deleteNode;
		}
	}

	void pop_back()
	{
		if (head == nullptr)
		{
			cout << "linked list is empty" << endl;
		}
		else
		{
			Node* deleteNode = head;
			Node* currentNode = head;

			if (size == 1)
			{
				head = nullptr;
			}
			else
			{
				for (int i = 1; i < size; i++)
				{
					currentNode = currentNode->next;
				}
				currentNode->next = head->next;
				head = currentNode;
			}
			size--;
			delete deleteNode;

		}
	}


	const int& Size()
	{
		return size;
	}

	~CircleLinkedList()
	{
		while (head != nullptr)
		{
			pop_front();
		}
	}
};

