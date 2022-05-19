#include <iostream>

using namespace std;

int main()
{
    float basic_salary,precentage_allowance,precentage_deduction;
    cout<<"Enter yor salary "<<endl;
    cin>>basic_salary;
    cout<<"Enter yor precentage_allowance "<<endl;
    cin>>precentage_allowance;
    cout<<"Enter yor precentage_deduction "<<endl;
    cin>>precentage_deduction;

    cout<<"Your net salary is "<< basic_salary + (basic_salary*precentage_allowance/100-basic_salary*precentage_deduction/100);
}