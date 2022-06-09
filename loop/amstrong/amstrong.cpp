#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int a ,x;
    int sum = 0;
    cout <<"Enter the number";
    cin >> x; 
    a = x;

    while (a>0)
    {
        int y =(a%10);
        sum = y*y*y + sum;
        a = a /10 ;
    }
    if (sum == x)
    {
        cout<<"ِAmstrong";
    }
    else
    {
        cout<<"Not Amstrong";
    }
    return 0;
}