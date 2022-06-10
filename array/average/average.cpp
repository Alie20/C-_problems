#include <stdio.h>
#include <iostream>

using namespace std;

int main ()
{
    int sum =0; 
    int n;
    int A[100];

    cout <<"Enter the number of the Elements";
    cin>> n;

    for (int i = 0 ; i<n ; i++)
    {
        cout<<"Enter the Element";
        cin >> A[i];
    }
    for (int i = 0 ; i<n ; i++)
    {
        sum += A[i];
    }
    float Average = sum/n;
    cout<<Average<<endl;
}