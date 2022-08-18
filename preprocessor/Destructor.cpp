#include <stdio.h>
#include <iostream>

using namespace std;
class Demo
{
    public:
    Demo()
    {
        cout<<"Constructor"<<endl;
    }
    ~Demo()
    {
        cout<<"Destructor";
    }
};
void fun1()
{
    Demo d;
}

int main ()
{
    fun1();
}