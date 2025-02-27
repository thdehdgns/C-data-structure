#include <iostream>
#include "String.h"
using namespace std;
int main()
{
    String string;
    string = "data";
    cout << "size:" << string.Size() << endl;


    for (int i = 0; i < string.Size(); i++)
    {
        cout << string[i];
    }

    string = "apple";
    cout << endl;
    for (int i = 0; i < string.Size(); i++)
    {
        cout << string[i];
    }
    return 0;
}

