#include<iostream>
using namespace std;
class student_manag{
 string Name;
int RollNo;
string Email;
string DepartName;
string CourseName;
public: int details()
{
    cout<<"Enter RollNo: ";
    cin>>RollNo;
    if(RollNo>=61 && RollNo<=120)
    {
        cout<<"True";
        cout<<"Enter Name: ";
        cin>>Name;
        cout<<"Enter Email: ";
        cin>>Email;
        cout<<"Enter Deaprt: ";
        cin>>DepartName;
        cout<<"Enter CourseNmae: ";
        cin>>CourseName;    
        return 1;
    }
    else{
        cout<<"False";
    return 0;
    }
}
   public: void Display(){
    cout<<"Enter Name: "<<Name;
    cout<<"Enter Email: "<<Email;
    cout<<"Enter Department Name: "<<DepartName;
    cout<<"Enter Course Name: "<<CourseName;
    }
};
int main(){
    student_manag obj;
    int res;
res=obj.details();
if(res==1){

 obj.Display();
}
else{
cout<<"Failed!";
}
return 0;
}
