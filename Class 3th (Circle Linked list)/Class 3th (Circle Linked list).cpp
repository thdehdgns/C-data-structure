#include <iostream>
#include "Stack.h"
using namespace std;
int main()
{
    Stack<int> stack;
    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.push(40);
    stack.push(50);
    

    while (stack.Empty() == false)
    {
        cout << stack.Top()<< endl;
        stack.pop();
    }





    return 0;
}

