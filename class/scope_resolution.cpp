#include <stdio.h>
#include <iostream>

using namespace std;

class Rectangle
{
    private:
        int length;
        int width ; 

    public:
    Rectangle();
    Rectangle(int l,int b);
    Rectangle(Rectangle &r);
    int getLength() {return(length);}
    int getWidth() {return(width);};
    void setLength();
    void setWidth();
    int area ();
    int preimeter();
    bool isSquare();
    ~Rectangle(); 

};
// using scope resolution 
int main ()
{
    Rectangle r1(10,10);
    cout<<r1.area()<<endl;
    cout<<r1.preimeter()<<endl;
    cout<<r1.isSquare()<<endl;
    return 0;
}

Rectangle::Rectangle()
{
    length =1;
    width =1;

}
Rectangle::Rectangle(int l , int w )

{
    length = l;
    width = l;
}

Rectangle::Rectangle(Rectangle &r)
{
    length = r.length;
    width;
}

int Rectangle::area()
{
    return (length*width);
}

int Rectangle::preimeter()
{
    return 2*(length+width);
}

bool Rectangle::isSquare()
{
    return (length==width);
}
Rectangle::~Rectangle()
{
    cout<<"Rectangle Destroyed";
}



