#include <stdio.h>
#include <iostream>

using namespace std;

int main ()
{
    char c [] = {'h','e','l','l','o','p','\0'};
    char *s = "Mynameiskhan";
    char a [] = {65,70,57,0};
    cout <<c<<endl;
    cout<<s<<endl;
    cout<<a<<endl;

    char x[50];
    cout<<"Enter your name?"<<endl;
    cin>>x;
    cout<<x<<endl;

    cin.ignore();


    char y[50];
    cout<<"ُEnter your full name?"<<endl;
    cin.getline(y,50);
    cout<<y;
}