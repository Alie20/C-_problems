#include <stdio.h>
#include <iostream>

using namespace std ;

int main ()
{
    float grade;
    int m1 ,m2 ,m3;
    cout <<"Enter your score in three subjects "<<endl;
    cin >>m1>>m2>>m3;

    grade =( m1 + m2 + m3 )/3;
    if (grade >= 60)
    {
        cout<<"A";
    }
    else if (grade<60 && grade>=35)
    {
        cout<<"B";
    }
    else
    {
        cout<<"C";
    }
}