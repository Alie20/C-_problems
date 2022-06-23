#include <stdio.h>
#include <iostream>

using namespace std;

void display()
{
    cout<<"Hello World";
}

int add(int x , int y )
{
    return (x+y);
}

int max (int x, int y, int z )
{
    if (x>y && x >z)
    {
        return x;
    }
    else if (y >x && y>z)
    {
        return y;
    }
    else
    {
        return z;
    }
}

int main()
{
    display();

    int a =10;
    int b =20;
    int c ;
    int d ;

    c = add(a,b);
    cout <<c<<endl;

    d = max(a,b,c);
    cout <<d<<endl;
}