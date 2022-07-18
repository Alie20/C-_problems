#include <stdio.h>
#include <iostream>

using namespace std;
class Rational
{
    public:
        int num;
        int den;

        Rational(int r = 0  , int i =1)
        {
            num = r;
            den = i;

        }
    friend Rational operator/(Rational x,Rational y);
    friend ostream & operator<<(ostream &o,Rational &r);
    
};
ostream &operator<<(ostream &o,Rational &r)
{
    o<<r.num<<"/"<<r.den<<endl;
}
Rational operator+(Rational x, Rational y)
{       
        Rational temp ;
        temp.num = (x.num*y.den+y.num*x.den);
        temp.den = (x.den*y.den);
        return temp;
}

int main()
{
    Rational c1(3,4);
    Rational c2(2,5);
    Rational c3;

    c3 = c1+c2;
    cout<<c1<<c2;
    cout <<c3;
    return 0; 
}