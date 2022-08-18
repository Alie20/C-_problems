#include <iostream>

using namespace std;

int main()
{
    []{cout<<"Hello World"<<endl;}();
    [](int x ,int y){cout<<x+y<<endl;}(10,5);
    int a =10,b=4;
    [a,b](){cout<<a+b<<endl;}();
    int c = [a,b](){return a+b;}();
    cout<<c;
    int n= 10;
    auto f=[&n](){cout<<n++<<endl;};
    f();
    cout<<n;
}