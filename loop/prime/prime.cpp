#include <stdio.h>
#include <iostream>

using namespace std;

int main ()
{
    int a;
    int flag = 0;
    cout << "Enter the number" <<endl;
    cin>>a;

    for (int i = 2; i< a ; i++)
    {
        if (a % i == 0)
        {
            cout<<"Not Prime Number";
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        cout <<"Prime Number";
    }
    
}