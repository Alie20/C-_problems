#include <stdio.h>
#include <iostream>

using namespace std;

template <class T>

T add (T x , T y)
{
    return (x+y);
}

int main()
{
    int a;
    float b;
    a = add(10,3);
    b = add(2.1f,4.2f);
    cout<<a <<endl<<b;
}