#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int day; 
    cout << "Please enter the number";
    cin >> day;

    switch(day){
        case 1 : 
            cout<<"monday";
            break;
        case 2 :
            cout<<"monday";
            break;
        case 3 :
            cout<<"tuesday";
            break;
        case 4 :
            cout<<"Wednesday";
            break;
        case 5 :
            cout<<"Thursday";
            break;
        case 6 :
            cout<<"Friday";
            break;
        case 7 :
            cout<<"Sunday";
            break;
        default :
            cout<<"Invalid";
    }

}