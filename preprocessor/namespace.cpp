#include <stdio.h>
#include <iostream>

using namespace std;

namespace FIRST
{
    void fun1()
    {
        cout<<"FIRST"<<endl;
    }
}

namespace SECOND
{
    void fun2()
    {
        cout<<"SECOND";
    }
}

using namespace FIRST;



int main ()
{
    fun1();
}