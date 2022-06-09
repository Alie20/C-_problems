#include <stdio.h>
#include <iostream>

using namespace std;


int main ()
{
    int fact = 1; 
    int x;

    cout<<"Please enter the number"<<endl;
    cin>>x;

    for(x;x>1;x--)
    {
        fact = fact *x;
    }
    cout<<fact<<endl;
    return 0;
}





