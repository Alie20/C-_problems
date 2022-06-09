#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int x ;
    cout << "please enter the nuber"<<endl;
    cin >> x ;

    for (int i = 1; i <=x ; i++)
    {
        if (x % i == 0)
        {
            cout << i<<endl;
        }
    }
}