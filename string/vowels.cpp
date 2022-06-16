#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main ()
{
    int vowels = 0; 
    int consta = 0;
    int words = 0;
    int i = 0;
    string s1 = "How are you sir";

    while(s1[i]!= '\0')
    {
        if ((s1[i]>=65 && s1[i]<=90) || (s1[i]>=97 && s1[i]<=122))
        {
            if (s1[i] =='a' || s1[i] =='e' || s1[i] =='o' || s1[i] =='u' || s1[i] =='i' || s1[i] =='A' || s1[i] =='E' || s1[i] =='O' || s1[i] =='U' || s1[i] =='I')
            {
                vowels++;
            }
            else
            {
                consta++;
            }
        }
        else if (s1[i] == 32)
        {
            words++;
        }
        i++;
    };
    words++;
    cout<<consta<<endl;
    cout<<vowels<<endl;
    cout<<words<<endl;
}
