#include <stdio.h>
#include <iostream>

using namespace std;

class Outer 
{
    public:
        int a ;
        static int b; 
        void fun_1()
        {
            cout<<a<<endl;
        }
        class Inner
        {
            public:
                int x;
                void display()
                {
                    cout<<"Inner_class"<<endl;
                }

        };
        Inner I;
};
int Outer::b=0;

int main()
{
    
}