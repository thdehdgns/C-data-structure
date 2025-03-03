#pragma once
#include <iostream>
#define SIZE 6
using namespace std;
template <typename KEY, typename VALUE>
class HashTable
{
private:
	struct Node
	{
		KEY* key;
		VALUE* value;
		Node* next;
	};

	struct Bucket
	{
		int count;
		Node* head;
	};

	Bucket bucket[SIZE];

public:

	HashTable()
	{
		for (int i = 0; i < SIZE; i++)
		{
			buket[i].count = 0;
			buket[i].head = nullptr;

		}
	}

	template<typename T>
	Function(T data)
	{
		unsigned int hashIndex = (int)key % SIZE;
		return hashIndex;
	}

	template<>
	const int& Function(const char* key)
	{
		int hash = 0;

		for (int i = 0; i < strlen(key); i++)
		{
			hash += key[i];

		}

		int hashIndex = hash % SIZE;
		return hashIndex;
	}


};

