/*To create a student class its constructor, destructor and member functions*/
#include<iostream>
using namespace std;
class student
{
    public: student()
    {
        cout<<"Welcome to Student Class!";
    }
    private: int RegNo;
    public: int validate()
    {
        cout<<"\nEnter RegNo: ";
        cin>>RegNo;
        if(RegNo>=61 && RegNo<=120)
        {
        cout<<"\nRegisteration number is: "<<RegNo;
        return 0;
    }
    else{
        cout<<"\nNo record Found!";
        return 1;
    }
}
    public: ~student()
    {
        cout<<"\nDetailes checked Successfully!";
    }
    private: string Name,DOB,Dept;
    int Batch;
    int attend;
    public: void details()
    {
        cout<<"\nEnter name: ";
        getline(cin,Name); // if i want space between the record details during input
        cout<<"\nEnter DOB: ";
        getline(cin,DOB);
        cout<<"\nEnter Dept: ";
        getline(cin,Dept);
        cout<<"\nenter batch year";
        cin>>Batch;
        //cin>>Name>>DOB>>Dept>>Batch;
        cout<<"\nDetails of student named <<Name is: "<<Name<<"\n"<<DOB<<"\n"<<Dept<<"\n"<<Batch<<"\n";
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
int main()
{
    student obj;
    int res;
    res=obj.validate();
    if(res==0)
    {
        obj.details();
    }
    else{
        cout<<"\nError occurred!";
    }

}