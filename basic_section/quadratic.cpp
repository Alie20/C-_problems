#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a,b,c;
    int root1,root2;
    cout<<"Enter the paramaters a,b,c"<<endl;
    cin>>a>>b>>c;
    root1 = (-b+sqrt(pow(b,2)-4*a*c))/2*a;
    root2 = (-b-sqrt(pow(b,2)-4*a*c))/2*a;
    cout<<"The result = "<<root1<<" " <<root2<<endl;
    return 0;
}