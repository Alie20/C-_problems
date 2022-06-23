#include <stdio.h>
#include <iostream>

using namespace std; 

int add (int a , int b , int c =0)
{
    return a+b+c;
}
int main ()
{
    int z ,y;
    z = add (10,30,4);
    y = add (12,2);
    cout <<z<<"\t"<<y;
}