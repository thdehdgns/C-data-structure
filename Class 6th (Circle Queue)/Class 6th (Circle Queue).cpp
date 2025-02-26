#include <iostream>
#include "Vector.h"
using namespace std;
int main()
{
    Vector<int> vector;
    vector.push_back(10);
    vector.push_back(20);
    vector.push_back(30);
    vector.pop_back();

    for (int i = 0; i < vector.Size(); i++)
    {
        cout << vector[i] << endl;
    }
    return 0;
}
