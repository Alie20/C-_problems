#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    //create an array stored in heap
    int *p =new int[5];
    p[0] = 1;
    p[1] = 2;
    p[2] = 3;
    p[3] = 4;
    p[4] = 5;

    // delete array after using it
    delete []p;
    p = nullptr;

}