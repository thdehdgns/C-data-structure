#pragma once
#include <iostream>
using namespace std;
class String
{
private:
	int size;
	char* pointer;
public:
	String()
	{
		size = 0;
		pointer = nullptr;
	}



	void operator = (const char *word)
	{
		size = strlen(word) + 1;
		
		if (pointer == nullptr)
		{
			pointer = new char[size];
			for (int i = 0; i < size; i++)
			{
				pointer[i] = word[i];
			}
		}
		else
		{
			char* newpointer = new char[size];
			for (int i = 0; i < size; i++)
			{
				newpointer[i] = word[i];
			}

			delete [] pointer;

			pointer = newpointer;
		}


		return;
	}
	
	const char& operator[](const int& index)
	{
		return pointer[index];
	}

	const int& Size()
	{
		return size - 1;
	}



	~String()
	{
		if (pointer != nullptr)
		{
			delete[] pointer;
		}

	}

};

