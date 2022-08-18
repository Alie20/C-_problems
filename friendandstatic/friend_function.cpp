#include <stdio.h>
#include <iostream>

using namespace std;
class Test 
{
    int a ;
    public:
        int b;
    protected:
        int c; 

    friend void fun_1();
};
void fun_1()
{
    Test t;
    t.a=1;
    t.b=2;
    t.c=4;
}
int main ()
{
    fun_1();
}