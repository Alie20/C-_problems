#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    try
    {
        throw 1;
    }
    
    catch(int e)
    {
        cout<<e;
    }
    catch(double e)
    {
        cout<<e;
    }
    catch(char e)
    {
        cout <<e;
    }
    catch(...)
    {
        cout<<"Error";
    }
    
}