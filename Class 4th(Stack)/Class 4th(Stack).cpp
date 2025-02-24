#include <iostream>
#include "LinearQueue.h"
using namespace std;
int main()
{
	LinearQueue<int> linear;
	linear.push(10);
	linear.push(20);
	linear.push(30);
	linear.push(40);
	linear.push(50);

	cout << "Linear Queue Size: " << linear.size() << endl;
	while (linear.Empty() == false)
	{
		cout << linear.Front() << endl;
		linear.pop();
	}
	
	return 0;
}

