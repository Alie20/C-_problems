#include <stdio.h>
#include <iostream>

using namespace std;

class Base
{
    public:
        Base()
        {
            cout<<"The default base"<<endl;
        }
        Base(int x)
        {
            cout<<"The default base paramter "<<x<<endl;
        }
};
class Derived : public Base
{
    public:
        Derived()
        {
            cout<<"The default dervied"<<endl;
        }
        Derived(int a)
        {
            cout<<"The default derived parameter "<<a<<endl;
        }
        Derived(int a,int x):Base(x)
        {
            cout<<"The default derived parameter "<<a<<endl;
        }
};
int main()
{
    Derived d(1,2);

}