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

			head = newNode; //이게 이렇게되네 ㄷㄷ;
			
		}
		size++;
	}

	void show()
	{
		Node* currentNode = head;
		if (head == nullptr)
		{
			cout << "Linked list is empty" << endl;
		}
		else
		{
			for (int i = 0; i < size; i++)
			{
				cout << currentNode->data << endl;
				currentNode = currentNode->next;
			}
		}
	}



};

