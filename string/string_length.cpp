#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    string s1 = "Good morning sir";
    int count = 0;
    int i = 0;

    while(s1[i] !='\0')
    {
        count++;
        i++;
    };
    cout<<count;


}