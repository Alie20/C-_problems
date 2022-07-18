#include <stdio.h>
#include <iostream>

using namespace std;
class Complex
{
    public:
        int real;
        int img;

        Complex(int r =0 , int i = 0)
        {
            real = r;
            img = i;

        }
    friend Complex operator+(Complex x,Complex y);
    
};
Complex operator+(Complex x,Complex y)
{
        Complex temp;
        temp.real = y.real + x.real;
        temp.img = y.img + x.img;
        return temp;
    }
int main()
{
    Complex c1(3,7);
    Complex c2(5,4);
    Complex c3;

    c3 = c1+c2;
    cout <<c3.real<<"+i"<<c3.img<<endl;
    return 0; 
}