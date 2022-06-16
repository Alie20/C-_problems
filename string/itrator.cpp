#include <string>
#include <iostream>

using namespace std; 

int main()
{
    string s1 = "Hello World";
    string :: iterator it;

    for (it=s1.begin();it!=s1.end();it++)
    {
        cout<<*it;
    }
    cout<<endl;

    string :: reverse_iterator rit;

    for (rit =s1.rbegin();rit!=s1.rend();rit++)
    {
        cout<<*rit;
    }

}