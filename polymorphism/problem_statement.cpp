#include <stdio.h>
#include <iostream>

using namespace std;

class Shape
{   
    public:
        virtual float area() = 0 ;
        virtual float perimter() = 0;
};

class Rectangle :public Shape
{
    private:
        int length;
        int width;
    public:
    Rectangle(int l = 0 , int w = 0)
    {
        length = l;
        width = w;
    }
    float area ()
    {
        return (length*width);
    }
    float perimter ()
    {
        return (length+width)*2;
    }
};

class Circle : public Shape
{
    private:
        int radius;
    
    public:

    Circle(int r = 0)
    {
        radius = r;
    }
    float area()
    {
        return (3.1456*radius*radius);
    }
    float perimter()
    {
        return (2*3.1456*radius);
    }
};

int main()
{
    Shape *ptr1 = new Circle(5);
    Shape *ptr2 = new Rectangle(5,4);

    cout<<"The Area of Rectangle: "<<ptr2->area()<<"\t"<<"The perimter of Rectange: "<<ptr2->perimter()<<endl;
    cout<<"The Area of Circle: "<<ptr1->area()<<"\t"<<"The perimter of Circle: "<<ptr1->perimter()<<endl;
}