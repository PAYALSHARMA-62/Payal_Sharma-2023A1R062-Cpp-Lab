/* Write a program
a. To create a base class with name Employee Management system
b. Create a function with name SalaryCalculate(), this function will
calculate Employees Salary, accept Basic salary From user , Number
of working days and calculate salary
c. Craete Derived class with name Manager
d. Ovverride BAse class function, salaryCalculate() and calculate Manager salary
adding component like TA 3% of Basic salary, DA 10% of Basic salary
e. Craete a derived class with name Developer
ovverride Base class Function, slarycalculate() and claculate Developer slary
adding component like TA 5% of Basic slary, DA 10% of Basic salary
f. Create a derived class with anme Accountant
g. Override Base class Function, salarycalculate() and calculate Accountant salary
adding component like TA 4% of Basic slary, DA 9% of basic salary.*/

#include<iostream>
using namespace std;
class Employeemangsystem{
    public: int Basicsal; int wdays;
    int Totalsal;
 void SalaryCalculate(){
 cout<<"Enter Basic salary: ";
cin>>Basicsal;
cout<<"\nEnter number of Working days: ";
cin>>wdays;
Totalsal=(Basicsal/30)*wdays;
cout<<"\nTotal slary based on working days are: "<<Totalsal;
 }
};
 class Manager: public Employeemangsystem{
   public: void SalaryCalculate(){
    cout<<"\nEnter Basic salary: ";
 cin>>Basicsal;
 cout<<"\nEnter number of Working days: ";
 cin>>wdays;
 Totalsal=(Basicsal/30)*wdays;
cout<<"\nTotal slary based on working days are: "<<Totalsal;
        cout<<"\nTA of BAsic Salary of Manager is: "<<Basicsal*3/100;
        cout<<"\nDA of BAsic Salary Manager is: "<<Basicsal*10/100;
    }
 };
 class Developer: public Manager{
    public:void SalaryCalculate(){
        cout<<"\nEnter Basic salary: ";
     cin>>Basicsal;
     cout<<"\nEnter number of Working days: ";
     cin>>wdays;
     Totalsal=(Basicsal/30)*wdays;
    cout<<"\nTotal slary based on working days are: "<<Totalsal;
            cout<<"\nTA of BAsic Salary of Manager is: "<<Basicsal*3/100;
            cout<<"\nDA of BAsic Salary Manager is: "<<Basicsal*10/100;
            cout<<"\nTA of BAsic Salary of Developer is: "<<Basicsal*5/100;
            cout<<"\nDA of BAsic Salary Developer is: "<<Basicsal*10/100;
        }
 };
 class Accountant: public Developer{
    public:void SalaryCalculate(){
        cout<<"\nEnter Basic salary: ";
     cin>>Basicsal;
     cout<<"\nEnter number of Working days: ";
     cin>>wdays;
     Totalsal=(Basicsal/30)*wdays;
    cout<<"\nTotal slary based on working days are: "<<Totalsal;
            cout<<"\nTA of BAsic Salary of Manager is: "<<Basicsal*3/100;
            cout<<"\nDA of BAsic Salary Manager is: "<<Basicsal*10/100;
            cout<<"\nTA of BAsic Salary of Developer is: "<<Basicsal*5/100;
            cout<<"\nDA of BAsic Salary Developer is: "<<Basicsal*10/100;
            cout<<"\nTA of BAsic Salary of Manager is: "<<Basicsal*4/100;
            cout<<"\nDA of BAsic Salary Manager is: "<<Basicsal*9/100;
        }
 };
int main(){
    Accountant obj;
    obj.SalaryCalculate();
}