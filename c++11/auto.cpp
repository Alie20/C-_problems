#include <iostream>

using namespace std;

float fun()
{
    return(1+2.15+1+'a');
}
int main()
{
    auto x =fun();
    cout<<x;

    int a =10;
    float b= 90.12;
    decltype(b) c = a +b ;
    cout<<c<<endl;
}