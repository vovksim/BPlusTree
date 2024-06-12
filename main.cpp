#include <iostream>
#include <vector>
#include "bPlusTree.h"

using namespace std;


int main()
{
    BPlusTree<double> bpt(2);
    bpt.insert(10);
    bpt.insert(6);
    bpt.insert(15);
    bpt.insert(31);
    bpt.insert(20);
    bpt.insert(27);
    bpt.insert(50);
    bpt.insert(44);
    bpt.insert(18);
    bpt.insert(19);
    bpt.insert(16);
    bpt.print(std::cout);
    return 0;
}


