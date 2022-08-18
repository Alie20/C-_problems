#include <stdio.h>
#include <iostream>

using namespace std;

class parents
{
    public:
        virtual void display()
        {
            cout<<"This is base class"<<endl;
        }
};
class child : public parents
{
    public:
    void display()
    {
        cout<<"This is Derived class"<<endl;
    }
};
int main ()
{
    child c;
    parents *ptr =&c;
    ptr->display();
}