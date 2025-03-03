/*Demonstrate working of
create a class with name Student_Management_System
store student data from Rollno 1 to 10
Data includes(Name,RollNo,Precentage)
Display All data in reverse order using Array of object*/
#include<iostream>
using namespace std;
class Student_Management_System
{
    private: string Name;int RollNo;float Percentage;
    public: Student_Management_System(string N, int Roll, float P)
    {
        Name=N;
        RollNo=Roll;
        Percentage=P;
    }
    public: void Display()
    {
        cout<<"\nName="<<Name<<"\nRollNumber="<<RollNo<<"\nPercentage="<<Percentage;
    }

};
int main()
{
    Student_Management_System obj[3]={{"Payal",90,92},{"Simran",95,91},{"Mahi",94,90}};
    //obj[1].Display();
    int i;
    for(i=2;i>=0;i--)
    {
        obj[i].Display();
    }
}