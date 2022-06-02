#include <iostream>
#include <stdio.h>

using namespace std;

int main ()
{
    float a ,b ,c;
    cout<<"Enter two numbers"<<endl;
    cin>>a>>b;
    if (b ==0)
    {
        cout << "ZeroErrorDivision"<<endl;
    }
    else
    {
        c = a/b ; 
        cout << c <<endl;
    }
}