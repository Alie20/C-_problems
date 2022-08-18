#include <stdio.h>
#include <iostream>

using namespace std;

class StackOverFlow:public exception{
    public:
        char * what(){
            return "StackOverFlow";
        }
        
};
class StackUnderFlow:public exception{
    public:
        char * what()
        {
            return "StackUnderFlow";
        }
};

class Stack
{
    private:
        int *stk;
        int size;
        int top = -1;
    
    public:
    Stack(int s)
    {
        size = s; 
        stk = new int[size];
    }
    void push(int x)
    {
        if (top = size -1)
        {
            throw StackOverFlow();
        }
        top++;
        stk[top]=x;

    }
    void pop()
    {
        if (top ==-1)
        {
            throw StackUnderFlow();
        }
        top--; 
    }
};
int main()
{
    Stack s(5);
    try
    {
        s.pop();
    }
    catch(exception)
    {
        cout<<"StackUnderFlow"<<endl;
    }
    
    try
    {
            s.push(1);
            s.push(3);
            s.push(6);
            s.push(3);
            s.push(1);
            s.push(1);


    }
    catch(exception)
    {
        cout<<"StackOverFlow";
    }
    
    }