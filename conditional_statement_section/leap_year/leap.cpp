#include <stdio.h>
#include <iostream>

using namespace std;

int main ()
{
    int year;
    cout <<"please Enter the year";
    cin >> year;

    if (year%4 ==2)
    {
        if (year%100==0)
        {
            if (year%400==0)
            {
                cout<<year<<" is a leap Year"<<endl;
            }
            else
            {
                cout<<year<<" is not a leap Year"<<endl;
            }
        }
        else
        {
            cout<<year<<" is a leap Year"<<endl;
        }
    }
    else
    {
        cout<<year<<" is not a leap Year"<<endl;

    }
}