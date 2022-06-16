#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main ()
{
    string s1 = "how can i help you sir";
    int i = 0;

    while (s1[i] != '\0')
    {
        if (char(s1[i])>=97 && char(s1[i])<=122)
        {
            s1[i]-=32;
        }
        
        i++;
    }
    cout<<s1;
}