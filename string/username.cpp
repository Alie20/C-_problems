#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string email ="Ahmed@gmail.com";
    int n = email.find('@');
    cout<<email.substr(0,n);
}