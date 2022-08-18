#include <stdio.h>
#include <iostream>

using namespace std;
class Base
{
   
public:
    void fun1()
    {
        cout<<"Base function 1"<<endl;
    }
};
class Derived :public Base
{
    public:
    void fun2()
    {
        cout<<"Derived function 2 "<<endl;
    }
};
int main()
{
    Derived d;
    Derived *ptr_derived_class = &d;
    ptr_derived_class->fun1();
    ptr_derived_class->fun2();
}