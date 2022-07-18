#include <iostream>
#include <stdio.h>

using namespace std;


class Rectange
{
    private:
        int length;
        int width;
    public:
        void set_length(int l)
        {
            if (l >=0)
            {
                length = l ;
            }
            else 
            {
                length = 0;
            }
        }
        void set_width(int w)
        {
            if (w >=0)
            {
                width = w ;
            }
            else 
            {
                width = 0;
            }
        }
        int get_length()
        {
            return length;
        }
        int get_width()
        {
            return width;
        }
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
    Rectange r1;
    r1.set_length(10);
    r1.set_width(5);
    cout<<r1.area()<<endl;
    cout<<r1.premiter()<<endl;
}