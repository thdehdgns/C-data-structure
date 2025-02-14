#include <iostream>
#include "SingleLinkedList.h"
using namespace std;
int main()
{
    SingleLinkedList<int> single;
    single.push_front(10);
    single.push_front(20);
    single.push_front(30);
    single.push_back(10);
    single.push_back(12123);
    single.show();
    cout << endl;
    single.pop_back();
    single.show();
    
   



    return 0;
}

