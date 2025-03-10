#include <iostream>
#include "AdjacencyMatrix.h"
using namespace std;
int main()
{
    AdjacencyMatrix<char> ad;

    ad.push('A');
    ad.push('B');
    ad.push('C');

    ad.edge(0, 1);
    ad.edge(1, 2);

    ad.show();

    return 0;
}

