#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std; 

int main ()
{
    vector <int> v= {2,4,6,8,10};
    v.push_back(12);
    v.push_back(14);
    v.pop_back();
    cout<<"Using For Each"<<endl;
    for(auto x : v)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    vector<int>::iterator itr;
    cout<<"Using Iterator"<<endl;
    for (itr = v.begin(); itr !=v.end(); itr++)
    {
        cout <<*itr<<endl;
    }
}