#pragma once
#include <iostream>
using namespace std;
#define SIZE 10
template<typename T>
class AdjacencyMatrix
{
private:
	int size;
	T vertex[SIZE];
	int matrix[SIZE][SIZE];
public:
	AdjacencyMatrix()
	{
		size = 0;
		for (int i = 0; i < SIZE; i++)
		{
			vertex[i] = NULL;
			for (int j = 0; j < SIZE;j++)
			{
				matrix[i][j] = 0;
			}
		}
	}

	void push(T data)
	{
		if (size >= SIZE)
		{
			cout << "over " << endl;
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
			cout << "over " << endl;
		}
		else if (i >= size || j >= size)
		{
			cout << "over " << endl;
		}
		else
		{
			matrix[i][j] = 1;
			matrix[j][i] = 1;
		}
	}

	void show()
	{
		if (size >= 0)
		{
			cout << " ";
			for (int i = 0; i < size; i++)
			{
				cout << vertex[i] << " ";


			}
			cout << endl;

			for (int i = 0; i < size;i++)
			{
				cout << vertex[i] << " ";

				for (int j = 0; j < size; j++)
				{
					cout << matrix[i][j] << " ";
				}

				cout << endl;
			}
		}
	}
};

