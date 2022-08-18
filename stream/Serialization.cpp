#include <stdio.h>
#include <iostream>
#include <string.h>
#include <fstream>

using namespace std; 
class Student
{   public:
    int roll;
    string name;
    string branch;
    friend ofstream &operator<<(ofstream &ofs,Student &student);
    friend ifstream &operator>>(ifstream&ifs,Student &Student);

};
ofstream &operator<<(ofstream &ofs,Student &student)
{
    ofs<<student.name <<endl;
    ofs<<student.roll<<endl;
    ofs<<student.branch<<endl;
    return ofs;
}
ifstream &operator<<(ifstream &ifs,Student &student)
{
    ifs>>student.name>>student.branch>>student.roll;
    return ifs;
    
}

int main()
{
    Student s1;
    s1.name="Alie";
    s1.roll=11;
    s1.branch="CS";
    ofstream ofs("Student.txt",ios::trunc);
    ofs<<s1;
    ofs.close();

}