#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

int main()
{
    ifstream infile;
    infile.open("MyText");
    if (! infile.is_open())
    {
        cout <<"File is not opened";
    }
    else
    {
        string str1,str2;
        infile >>str1;
        infile >>str2;

        cout <<str1<<" "<<str2;
        infile.close();
    }
}