#include <stdio.h>
#include <iostream>

using namespace std;

int main ()
{
    int sum = 0;
    int x; 
    cout<<"please enter the nubmer\n";
    cin>>x;

    for (int i = 0; i<=x;i++)
    {
        sum = sum + i;

    }
    cout<<"The sum = "<<sum<<endl;
    return 0;
    

}