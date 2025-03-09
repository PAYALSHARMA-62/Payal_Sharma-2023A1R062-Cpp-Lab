#include<iostream>
using namespace std;
class Employee
{
    public: Employee()
    {
        cout<<"Welcome!";
    }
    private: string Empname, Address; int Empid;
    public: Employee(string ename,string adrs,int eid)
    {
        Empname=ename;
        Address=adrs;
        Empid=eid;
    }
    public: ~Employee()
    {
        cout<<"\nMemory freed!";
    }
    public: void Display()
    {
        cout<<"\nName: "<<Empname<<"\t"<<"Adress: "<<Address<<"\t"<<"Employee ID: "<<Empid<<"\t";
    }
    /*public: ~Employee()
    {
        cout<<"\nMemory freed!";
    }*/
};
int main()
{
    Employee obj;
    Employee obj1[4]={{"Payal","jammu",62},{"Mahi","Muthi",78},{"Simran","Nagrota",65},{"Jasika","RSpura",10}};
    int i;
    for(i=0;i<=3;i++)
    {
        obj1[i].Display();
    }
}