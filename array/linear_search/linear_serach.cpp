#include <stdio.h>
#include <iostream>

using namespace std;

int main ()
{
    int index = 0 ;
    int A[10]; 
    int key;

    cout <<"Please enter the value "<<endl;
    for (int i = 0 ; i <10 ; i++)
    {
        cin>>A[i];
    }
    cout <<"Enter the number you search\n";
    cin>>key;

    for (int i = 0 ; i <10 ; i++)
    {
        if (key == A[i])
        {
            index = i;
            break;
        }
        
    }

    cout <<index<<endl;    


}