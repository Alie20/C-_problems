#include <stdio.h>
#include <iostream>
#include <cmath>


using namespace std;

int main ()

{
    int A[10]= {2,4,5,6,7,8,9,10,15,18};
    int start = 0;
    int end = 9;
    int middle ;
    int search = 15;

    while (start<=end)
    {
        middle = floor((start+end)/2);
        if (A[middle] == search)
        {
            cout<<middle<<endl;
            break;
        }
        else if (A[middle]<search)
        {
            start = middle + 1;
        }
        else if (A[middle]>search)
        {
            end = middle -1;
        }
    }

    
}