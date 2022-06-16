#include <stdio.h>
#include <iostream>

using namespace std;

int main ()
{
    int x =10;
    int &y = x;
    cout<<x<<endl<<y<<endl;
    x++;
    cout<<x<<endl<<y<<endl;
    y++;
    cout<<x<<endl<<y<<endl;
    cout<<&x<<endl<<&y<<endl;
}