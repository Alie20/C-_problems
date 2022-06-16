#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    //enlarging size of array in heap
    int * p = new int[5];
    delete []p;
    p = new int[20];
}