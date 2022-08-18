#include <iostream>

using namespace std; 

class Stack
{
    private :
        int top =-1;
        int size ;
        int *ptr;

    public:
        Stack(int n )
        {
            size = n;
            ptr = new int[size];
        }
    void push (int x);
    int pop();
};

int Stack::pop()
{
    int x ;
    if (top == -1)
    {
        cout<<"Stack Under Flow"<<endl;

    }
    else
    {
        x= ptr[top];
        top--;
    }
    return x;    
}
void Stack::push(int x)
{
    if (top == size -1)
    {
        cout<<"Stack Over Flow";
    }
    else
    {
        top++;
        ptr[top]= x;
    }
}
int main()
{
    Stack s(5);
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(5);
    cout<<s.pop();
    s.push(1);
    s.push(2);
    s.push(3);
}