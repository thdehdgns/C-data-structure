#include <iostream>
#include "DoubleLinkedList.h"
using namespace std;
int main()
{
    DoubleLinkedList<int> DoubleLink;
    DoubleLink.push_front(10);
    DoubleLink.push_front(20);
    DoubleLink.push_front(30);
    DoubleLink.pop_back();
    DoubleLink.pop_back();
    DoubleLink.pop_back();
    DoubleLink.pop_back();

    DoubleLink.show();
    cout << "Size: " << DoubleLink.Size() << endl;


    return 0;
}


