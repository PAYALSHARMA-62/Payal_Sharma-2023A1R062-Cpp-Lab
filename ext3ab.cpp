/*3a. To update the details of a student using a member function of student class.
3b. To Delete the details of a class student using a member fn of class student. */

#include<iostream>
using namespace std;
class Student{
    public: string StudentName;int StudentID;
    float Marks,per;
    public: Student(string Name,int ID,float Mark){
        StudentName=Name;
        StudentID=ID;
        Marks=Mark;
    }
    void Display(){
        cout<<"\nName= "<<StudentName<<"\t"<<"Marks are: "<<Marks<<"\t"<<"Studentid: "<<StudentID;
    }
};
void Semester1(Student Sem1){
    Sem1.Marks=400;
    cout<<"\nMarks in semester1: "<<Sem1.Marks;
}
void Semester2(Student Sem2){
    Sem2.Marks=450;
    cout<<"\nMarks in semester1: "<<Sem2.Marks;
}
/*void Update(Student &obj){
    cout<<"\nEnter your updated Name, Marks,StudentID";
    cin>>obj.StudentName>>obj.Marks>>obj.StudentID;
}*/
void Delete(Student *pobj){
    pobj->StudentName=" ";
    pobj->Marks=0;
    pobj->StudentID=0;
}
int main(){
    Student obj1("Abc",101,90);
    obj1.Display();
    Semester1(obj1);
    obj1.Display();
    Semester2(obj1);
    obj1.Display();
   // cout<<"\nUpdated record!";
    //Update(obj1);
    //obj1.Display();
    cout<<"\nDeleteed Record!";
    Delete(&obj1);
    obj1.Display();
}