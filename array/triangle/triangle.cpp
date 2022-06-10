#include <stdio.h>
#include <iostream>

using namespace std;

int main ()
{
    for (int i =0 ; i<5 ; i++)
    {
        for (int j = 0 ; j<=i ; j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    cout<<"######################"<<endl;
    for (int i = 0 ; i<5 ; i++)
    {
        for (int j = 5;j>i;j--)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    cout <<"########################"<<endl;
    for (int i =0 ; i<5;i++)
    {
        for(int j = 0 ; j<5;j++)
        {
            if (i>j)
            {
                cout<<" ";
            }
            else
            {
                cout<<"*";

            }
        }
        cout <<endl;    }

    cout<<"##################"<<endl;

    for (int i =0 ; i<5;i++)
    {
        for(int j = 0 ; j<5;j++)
        {
            if (i+j>=4)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";

            }
        }
        cout <<endl;    }
    int n = 5;
    for(int i = 0 ; i<n; i++)
    {
        for (int j = 0 ; j<n ; j++)
        {
            if (i+j<=n-1)
            {
                cout<<"* ";
                
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}