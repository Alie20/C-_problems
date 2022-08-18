#include <iostream>
#include <fstream>

using namespace std;
int main ()
{
    ofstream ofs("MyText",ios::trunc);
    ofs<<"Hello I am Alie Eldeen"<<endl;
    ofs<<"I live in cairo"<<endl;
    ofs.close();
}