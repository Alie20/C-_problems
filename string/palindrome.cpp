#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1 = "MAM";
    string s2 = "";

    string :: reverse_iterator itr;

    
     s2.append(s1.rbegin(),s1.rend());

    cout<<s2<<endl;
    if (s1.compare(s2)==0)
    {
        cout<<"palindrome";
    }

    
}