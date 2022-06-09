#include <stdio.h>
#include <iostream>

using namespace std;

int main ()
{
    int i =1,j=0;
    while(j<10)
    {
        j=j + i++ ;
        cout<<j<<endl;
    }
}