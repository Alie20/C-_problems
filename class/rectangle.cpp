#include <iostream>
#include <stdio.h>

using namespace std;


class Rectange
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
    Rectange r1,r2;
    r1.length = 10;
    r2.length = 20;
    r1.width = 4;
    r2.width =3;

    cout<<r1.area()<<endl;
    cout<<r2.area()<<endl;
}