#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int x;
    cout<<"Please enter the table";
    cin >>x;

    for (int i = 1 ; i <=12; i++)
    {
        cout<<i<<" x "<< x<<" = "<<i*x <<endl;
    }
    return 0;
}