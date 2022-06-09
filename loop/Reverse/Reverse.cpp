#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int a ;
    double number;
    int mult = 10;
    cout <<"Enter the number";
    cin >> a; 


    while (a>0)
    {
        number = (number*mult)+(a%10);
        cout<<number<<endl;
        a = a /10 ;
    }
    cout <<number;
    return 0;
}