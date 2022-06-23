#include <stdio.h>
#include <iostream>

using namespace std;

int search(int A[],int b)
{
    int c = sizeof(A);
    int flag = 0;
    for (int i =0 ; i<c ; i++)
    {
        if (b == A[i])
        {
            flag == 1;
            return i;
        }
    
    }
    if (flag == 0)
    {
        return -1;
    }
}
int main ()
{
    int A[] = {2,3,4,5,6,31,3,4};
    int b;
    int index;
    cout<<"Pleas Enter the number you search it"<<endl;
    cin>>b;

    index = search(A,b);
    cout << index <<endl;

}