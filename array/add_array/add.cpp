#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int A[5] = {2,3,4,5,6};
    int sum = 0;

    for (auto i :A)
    {
        sum = sum +i;
    }
    cout<<sum<<endl;
}