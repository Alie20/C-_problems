#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int A[2][3] = {{1,2,3},{5,6,7}};
    int B[2][3] = {{6,7,8},{21,2,2}};
    int C[2][3];
    for (int row = 0 ; row < 2 ; row++)
    {
        for (int col = 0 ; col <3 ; col++)
        {    
            C[row][col] = A[row][col] + B[row][col];
            cout<<C[row][col]<<" ";
        }
        cout<<endl;
    }

}