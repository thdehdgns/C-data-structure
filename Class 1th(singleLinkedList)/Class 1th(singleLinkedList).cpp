#include <iostream>
#include "DoubleLinkedList.h"
using namespace std;
int main()
{
    DoubleLinkedList<int> DoubleLink;
    DoubleLink.push_front(10);
    DoubleLink.push_front(20);
    DoubleLink.push_front(30);
    DoubleLink.push_back(40);
    DoubleLink.push_back(50);
    DoubleLink.show();



    return 0;
}


