#pragma once
#include <iostream>
template<typename T>
class SingleLinkedList
{
private:
	int Size;
	struct Node
	{
		T data;
		Node* next;
	};
	Node * head;
	Node* currentNode;
public:
	SingleLinkedList()
	{
		Size = 0;
		head = nullptr;
	}
	
	void push_front(T data)
	{
		Node* newNode = new Node;

		if (head == nullptr)
		{
			head = newNode;
			newNode->data = data;
			newNode->next = nullptr;
		}
		else if (head != nullptr)
		{
			newNode->data = data;
			newNode->next = head;
			head = newNode; 

		}
		Size++;
	}

	void push_back(T data)
	{
		Node* newNode = new Node;

		if (head == nullptr)
		{
			head = newNode;
			newNode->data = data;
			newNode->next = nullptr;
		}
		else if(head != nullptr)
		{
			newNode->data = data;
			if (newNode->next == nullptr)
			{
				currentNode = newNode;
			}
			else if (newNode->next != nullptr)
			{

			}
		}

		Size++;
	}
	

};

