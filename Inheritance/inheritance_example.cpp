#include <iostream>
#include <stdio.h>

using namespace std;


class Rectange
{
    private:
        int length;
        int width;

    public:
        Rectange()
        {
            length = 0;
            width = 0;
        }

        Rectange(int l, int w)
        {
            set_length(l);
            set_width(w);
        }


        Rectange(Rectange &r)
        {
            length = r.length;
            width = r.width;
        }
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

class Cubiod :public Rectange
{
    private:
        int height;
    public:
        Cubiod(int l =0 ,int w = 0 , int h =0)
        {
            height = h;
            set_length(l);
            set_width(w);

        }
        void set_height(int h=0)
        {
            height = h;
        }
        int get_heigth()
        {
            return height;
        }
        int volume()
        {
            return height * get_length() * get_width();
        } 
};
int main()
{
    Cubiod c1(1,2,3);
    cout<<c1.volume();
}