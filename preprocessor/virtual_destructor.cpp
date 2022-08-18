#include <stdio.h>
#include <iostream>

using namespace std;

class Base 
{
    public:
    Base()
    {
        cout<<"Constructor Base";
    }
    virtual ~Base()
    {
        cout<<"Destructor Base";
    }
};
class Derived: public Base
{
    public:
    Derived()
    {
        cout<<"Derived Constructor";
    }
    ~Derived()
    {
        cout<<"Derived Destructor";
    }
};
int main()
{
    Base *p =new Derived();
    delete p; 
}