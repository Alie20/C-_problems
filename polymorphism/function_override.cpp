#include <stdio.h>
#include <iostream>

using namespace std;

class parents
{
    public:
        void display()
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
    parents p;
    p.display();
    child c;
    c.display();
}