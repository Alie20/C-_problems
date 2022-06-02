#include <stdio.h>
#include <iostream>

using namespace std;

int main ()
{

    int amount;
    float discout;
    float billAmount;
    cout<<"Enter your billAmount"<<endl;
    cin >>amount;

    if (amount >= 500)
    {
        billAmount = 0.2;
    }
    else if (amount >= 100 && amount <500)
    {
        billAmount = 0.1;
    }
    else
    {
        billAmount = 0;
    }
    cout <<"Before discout :"<<amount<<endl;
    cout <<"discout :"<<amount * billAmount<<endl;
    cout <<"After discount :"<<amount*(1-billAmount)<<endl;
}