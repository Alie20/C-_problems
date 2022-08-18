#include <stdio.h>
#include <iostream>
#include <map>

using namespace std;

int main ()
{
    map<int,string> m;
    m.insert(pair<int,string>(1,"Alie"));
    m.insert(pair<int,string>(2,"Takie"));
    m.insert(pair<int,string>(3,"Omar"));

    map<int ,string>::iterator itr;
    for(itr=m.begin();itr != m.end();itr++)
    {
        cout<<itr->first<<" "<<itr->second<<endl;
    }
}