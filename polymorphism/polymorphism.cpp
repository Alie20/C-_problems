#include <stdio.h>
#include <iostream>

using namespace std;
class Car
{
    public:
    virtual void start()=0;
    virtual void stop()=0;
};

class Innova :public Car
{
    public:
    void start ()
    {
        cout <<"INNOVA STARTED"<<endl;
    }
    void stop ()
    {
        cout <<"INNOVA STOPPED"<<endl;
    }
};
class Swift :public Car
{
    public:
    void start ()
    {
        cout <<"Swift STARTED"<<endl;
    }
    void stop ()
    {
        cout <<"Swift STOPPED"<<endl;
    }
};

int main ()
{
    Car *c = new Innova();
    Car *b = new Swift();
    c->start();
    b->stop();
}