#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

class Employee
{
    private:
        int id;
        string name;
    public:
        Employee (int i , string n)
        {
            id = i;
            name = n;
        }
        
        string get_name()
        {
            return name;
        }
        int get_id()
        {
            return id;
        }
};

class FullTime :public Employee
    
{   public:
        int salary;
        FullTime(string name="",int id=0,int s=0):Employee(id,name)
        {
            
            salary = s;
        }
};

class PartTime :public Employee
{   
    public:
        int wage;
        PartTime(string name="",int id=0,int w=0):Employee(id,name)
        {
            wage = w;
        }
};
int main()
{
    FullTime f("Alie",102,7000);
    PartTime m("Takie",1234,500);

    cout<<"Name: "<<f.get_name()<<" "<<"ID: "<<f.get_id()<<" "<<"Salary: "<<f.salary<<endl;
    cout<<"Name: "<<m.get_name()<<" "<<"ID: "<<m.get_id()<<" "<<"Salary: "<<m.wage<<endl;
}