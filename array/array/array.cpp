#include <iostream>
#include <stdio.h>

using namespace std;

int main () 
{
    int A[5] = {3,5,6,7,8};

    for (auto i :A)
    {
        cout<<++i<<"\t";
    }

}