#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    string s1 = "Hello";
    cout <<"The string Length "<<s1.length()<<endl;
    cout <<"The string Size "<<s1.size()<<endl;
    cout <<"The capacity of string "<<s1.capacity()<<endl;
    cout <<"The maximum Capacity can be used "<<s1.max_size()<<endl;
    s1.clear();
    cout<<"The string length after clearing equal "<<s1.length()<<endl;
    if (s1.empty())
    {
        cout<<"Empty string"<<endl;
    }
    s1.resize(50);
    cout <<"The string size after resizing "<<s1.size()<<endl;


    string s2 = "Hello";
    s2.append(" World");
    cout<<s2<<endl;

    string s3 = "Good Morning";
    s3.insert(2,"oo");
    cout<<s3<<endl;

    string s4 = "Alie Eldeen";
    s4.replace(0,4,"Takie");
    cout<<s4<<endl;

    string s5 ="CLEAR";
    s5.erase();
    cout<<s5<<endl;

    string s6 = "Hello";
    s6.push_back('z');
    cout<<s6<<endl;
    s6.pop_back();

    string s7 = "Alie Eldeen";
    string s8 = "Ahmed Ali";
    s7.swap(s8);
    cout<<s7<<endl;

    string s9 = "MEMES";
    char a[10];

    s9.copy(a,s9.length());
    cout<<a<<endl;

    cout<<s9.find("M")<<endl;
    cout<<s9.rfind("E")<<endl;
    cout<<s9.find_first_of("E")<<endl;
    cout<<s9.find_last_of("E")<<endl;

    string s10 = "programming";
    cout<<s10.substr(3,4)<<endl;

    string s11 = "programming";
    cout<<s10.compare(s11)<<endl;

    cout<<s11.at(4)<<endl;
    cout<<s11.front()<<endl;
    cout<<s11.back()<<endl;

    string s12;
    s12 = s11;
    cout<<s12<<endl;

}