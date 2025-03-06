#include <iostream>
#include "PriorityQueue.h"
using namespace std;
int main()
{
    PriorityQueue<int> priorityQueue;
    priorityQueue.push(10);
    priorityQueue.push(5);
    priorityQueue.push(7);
    priorityQueue.push(12);
    priorityQueue.push(3);
    

    while (priorityQueue.empty() == false)
    {
        cout << priorityQueue.Top() << endl;
        priorityQueue.pop();
    }

    return 0;
}

