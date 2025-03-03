// student management system
#include<iostream>
using namespace std;
class Student
{
    public: void welcome()
    {
        cout<<"Welcome to my first Program!";
    }
};
class studentProfile
{
    private: string name,dob;
    public: void Profile(){
        cout<<"\nEnter student name: ";
        cin>>name;
        cout<<"Enter DOB: ";
        cin>>dob;
    }
};
class StudentCourse
{
    private: string Cname;
    int Cid;
    public:void course(){
     cout<<"Enter course name opted by student: ";
     cin>>Cname;
     cout<<"Course opted by student is: "<<Cname;
     cout<<"\nEnter Course ID: ";
     cin>>Cid;
     cout<<"\nCourse id by student is: "<<Cid;
    }
};
class StudentAttendance{
    private: int attend;
    public: void Attendance()
    {
        cout<<"\nEnter attendance record: ";
        cin>>attend;
        if(attend>=0 && attend<=75)
        {
            cout<<"\nYou are not eligible for exams!";
        }
        else{
            cout<<"\nYou are eligible for exams!";
        }
    }
};
int main(){
    Student obj;
    obj.welcome();
    studentProfile obj1;
    obj1.Profile();
    StudentCourse obj2;
    obj2.course();
     StudentAttendance obj3;
     obj3.Attendance();
}