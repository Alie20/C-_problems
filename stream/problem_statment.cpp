#include <stdio.h>
#include <iostream>
#include <string.h>
#include <fstream>

using namespace std; 
class market
{   public:
    string name;
    int price;
    int qty;
    friend ofstream &operator<<(ofstream &ofs,market &m);
    friend ifstream &operator>>(ifstream&ifs,market &m);

};
ofstream &operator<<(ofstream &ofs,market &m)
{
    ofs<<m.name <<endl;
    ofs<<m.price<<endl;
    ofs<<m.qty<<endl;
    return ofs;
}
ifstream &operator<<(ifstream &ifs,market &m)
{
    ifs>>m.name>>m.price>>m.qty;
    return ifs;
    
}

int main()
{
    market m1;
    m1.name="potatoes";
    m1.price=12;
    m1.qty=3;
    ofstream ofs("price.txt",ios::trunc);
    ofs<<m1;
    ofs.close();

}