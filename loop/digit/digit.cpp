#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int a ;
    cout <<"Enter the number";
    cin >> a; 


    while (a>0)
    {
        cout << a%10<<endl;
        a = a /10 ;
    }
    return 0;
}