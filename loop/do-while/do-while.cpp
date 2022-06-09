#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int i, n = 1;
    cout<<"Enter the number\n";
    cin>>i;
    do
    {
        cout<<n<<endl;
        n++;
    }
    while(i>=n);

}