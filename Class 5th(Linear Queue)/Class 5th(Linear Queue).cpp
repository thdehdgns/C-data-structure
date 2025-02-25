#include <iostream>
#include "circleQueue.h"
using namespace std;
int main()
{
    circleQueue<int> queue;
    queue.push(10);
    queue.push(20);
    queue.push(30);
    queue.push(40);

    while (queue.empty() == false)
    {
        cout << queue.Front()<< endl;
        queue.pop();
    }


    return 0;
}

