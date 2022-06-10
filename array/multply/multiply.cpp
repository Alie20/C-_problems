#include <stdio.h>
#include <iostream>

using namespace std;

int main ()
{
    int R1,C1,R2,C2;
    cout<<"Enter the row of the first matrix"<<endl;
    cin>>R1;
    cout<<"Enter the col of the first matrix"<<endl;
    cin>>C1;
    cout<<"Enter the row of the second matrix"<<endl;
    cin>>R2;
    cout<<"Enter the col of the second matrix"<<endl;
    cin>>C2;
    if (C1 != R2)
    {
        cout<<"Error in dimensions size";
        return 0;
    }
    else
    {
        int A[R1][C1];
        int B[R2][C2];
        int C[R1][C2];

        for (int i =0; i<R1;i++)
        {
            for(int j = 0 ; j<C1;j++)
            {
                cout<<"Enter the Element"<<endl;
                cin>>A[i][j];
            }
        }
        for (int i =0; i<R2;i++)
        {
            for(int j = 0 ; j<C2;j++)
            {
                cout<<"Enter the Element"<<endl;
                cin>>B[i][j];
            }
        }

        for (int i = 0;i<R1; i++)
        {
            for (int j = 0 ; j<C2 ; j++)
            {   
                C[i][j]  = 0;
                for (int k =0 ; k<C1 ; k++)
                {
                    C[i][j] += A[i][k] * B[k][j]; 
                }
                
            }    

        }
        for (int i = 0 ; i <R1 ; i++)
        {
            for (int j = 0 ; j<C1; j++)
            {
                cout<< A[i][j]<<"\t";
            }
            cout<<endl;
        }
        cout<<"*****************"<<endl;
        for (int i = 0 ; i <R2 ; i++)
        {
            for (int j = 0 ; j<C2; j++)
            {
                cout<< B[i][j]<<"\t";
            }
            cout<<endl;
        }
        cout<<"*****************"<<endl;
        for (int i = 0 ; i <R1 ; i++)
        {
            for (int j = 0 ; j<C2; j++)
            {
                cout<< C[i][j]<<"\t";
            }
            cout<<endl;
        }
        cout<<"*****************"<<endl;


    }
}