#include <stdio.h>
#include <iostream>

using namespace std;
class Your;
class My 
{
    int a ;
    public:
        int b ;
    protected:
        int c ;
    friend Your;
};

class Your
{
    public:
        My m ;
    void fun_1()
    {
         m.a= 1;
         m.b= 2;
         m.c= 3;   
    } 
};
int main ()
{

}