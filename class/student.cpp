#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;
class Student
{
    private:
        int roll;
        string name;
        int mark1 ,mark2,mark3;
    public:
        void set_roll(int roll)
        {
            if (roll<0)
            {
                this->roll =0;
            }
            else
            {
                this->roll =roll;
            }
        }
        void set_name(string name)
        {
            this->name=name;
        }
        void set_marks(int m1=0,int m2 = 0 ,int m3 =0)
        {
            cout<<m2<<endl;
            this->mark1=m1;
            this->mark2=m2;
            this->mark3=m3;
        }
        void display_total()
        {
            cout<<mark1<<endl;
            cout<<mark2<<endl;
            cout<<mark3<<endl;
            cout<<mark1+mark2+mark3<<endl;
        }
        void display_grade()
        {
            if ((mark1+mark2+mark3)/3 >85)
            cout<<'A'<<endl;
            else if (((mark1+mark2+mark3)/3 >75))
            cout<<'B'<<endl;
            else if ((mark1+mark2+mark3)/3 >65)
            cout<<'C'<<endl;
            else
            cout<<'F'<<endl;
        }

};
int main()
{
    string name;
    int roll;
    int mark_pyhsics,mark_chemistry,mark_math;
    Student s1;
    cout<<"Enter your name";
    getline(cin,name);
    cout<<"Enter your roll";
    cin>>roll;
    cout<<"Enter your marks in pyhsics chemistry math in sequence";
    cin>>mark_pyhsics>>mark_chemistry>>mark_math;

    s1.set_roll(roll);
    s1.set_name(name);
    s1.set_marks(mark_pyhsics,mark_chemistry,mark_math);
    s1.display_grade();
    s1.display_total();

    return 0;
}