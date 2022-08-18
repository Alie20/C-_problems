#include <stdio.h>
#include <iostream>

using namespace std;

int divide(int a, int b)
{
    if (b==0)
    {
        throw 1;
    }
    return a/b;
}

int main ()
{
    int a = 10, b= 0 , c;
    try
    {
        c = divide(a,b);
        cout<<c;
    }
    catch(int e)
    {
        cout <<"Error Division. Error No: "<<e<<endl;
    }
    
}