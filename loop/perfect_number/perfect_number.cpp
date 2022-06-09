#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int x ;
    int sum =0;
    cout << "please enter the nuber"<<endl;
    cin >> x ;

    for (int i = 1; i <=x ; i++)
    {
        if (x % i == 0)
        {
            sum = sum +i;
        }
    }

    if(sum == x*2)
    {
        cout<<"Perfect Number\n";
    }
    else
    {
        cout<<"Not perfect Number\n";
    }

}