#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

class Innova 
{
    public:
    static int price ;
    static int get_price ()
    {
        return price;
    }

};

int Innova::price=20000;

class Student
{
    public:
        int roll_number;
        string name;
        static int AddNO;

        Student (string n)
        {
            name = n ;
            AddNO++;
            roll_number = AddNO;
        }
        void display()
        {
            cout <<"Name : "<<name<<" ROll Number: "<<roll_number<<endl;
        }
};
int Student::AddNO=0;
int main ()
{
    cout<<Innova::get_price()<<endl;
    Student s1("Alie"),s2("Takie"),s3("Omar");

    s3.display();

}
