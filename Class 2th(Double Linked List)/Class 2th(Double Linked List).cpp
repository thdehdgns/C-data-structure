#include <iostream>
#include "CircleLinkedList.h"
using namespace std;
int main()
{
    CircleLinkedList<int> circle;
    circle.push_back(10);
    circle.push_back(20);
    circle.push_back(30);
    circle.push_back(40);
    circle.show();

    return 0;
}

