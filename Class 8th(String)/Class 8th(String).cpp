#include <iostream>
#include "HashTable.h"
using namespace std;
int main()
{
    HashTable<const char*, int> hashtable;

    hashtable.Insert("Sowrd", 10000);
    hashtable.Insert("Armor", 4000);


    return 0;
}

