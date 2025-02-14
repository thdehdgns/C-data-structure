#pragma once
#include <iostream>
using namespace std;
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
			Node* currentNode =head;
			newNode->data = data;
			while (currentNode->next != nullptr)
			{
				currentNode = currentNode->next;
			}
			currentNode->next = newNode;

			newNode->data = data;
			newNode->next = nullptr;
			
		}

		Size++;
	}
	

	void pop_front()
	{
		if (head == nullptr)
		{
			cout << "Linked List is empty" << endl;
		}
		else if (head != nullptr)
		{
			Node* deleteNode = head;
			
			head = deleteNode->next;

			delete deleteNode;
			
			Size--;
		}

	}

	void show()
	{
		if (head == nullptr)
		{
			cout << "Linked List is empty" << endl;
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

	void pop_back()
	{
		Node* deleteNode = head;
		Node* previousNode = head;

		if (head == nullptr )
		{
			cout << "Linked List is empty" << endl;
		}
		else
		{
			if (head->next == nullptr)
			{
				delete deleteNode;
				head == nullptr;
				Size--;
			}
			else
			{
				while (previousNode->next->next != nullptr)
				{
					previousNode = previousNode->next;
				}
				delete previousNode->next;
				previousNode->next = nullptr;
				Size--; //¼÷Á¦

			}
		}
	}

};

