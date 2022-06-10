#include <stdio.h>
#include <iostream>

using namespace std;
int main ()

{int max ;
int A[] = {4,3,5,6,2,5};

for(auto i:A)
{
    if (max< i )
    {
        max = i; 
    }
}
cout << max <<endl;
}