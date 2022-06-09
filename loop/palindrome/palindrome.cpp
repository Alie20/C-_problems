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
    int b = a;


    while (a>0)
    {
        number = (number*mult)+(a%10);
        a = a /10 ;
    }

    if (b == number)
    {
        cout<<"Palindrome"<<endl;
    }
    else
    {
        cout<<"Not palindrome"<<endl;
    }
    return 0;

}
