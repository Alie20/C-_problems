#include <iostream>
#include <stdio.h>

using namespace std;


class Rectangle
{
    public:
        int length;
        int width;

        int area()
        {
            return (length*width);
        }
        int premiter ()
        {
            return (2*(length+width));
        }
};
int main()
{
    Rectangle r1;
    // pointer in stack 
    Rectangle *p;
    p = &r1;
    p->length = 10;
    p->width =5;
    cout<<p->area();

    // pointer in heap 
    Rectangle *h;
    h =  new Rectangle;
    // == Rectangle *h = new Rectangle

    h->length = 2;
    h->width =3;
    cout<<endl<<h->area();
}