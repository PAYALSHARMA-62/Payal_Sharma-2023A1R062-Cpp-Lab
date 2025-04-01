/*To allocate approprite access specifiers to data memebers of students
and course class along with justification in comments
We declared memebers variables or attributes of class Student and class Course
like student name, student ID, Marks,Percentage, Coursename,
CourseId, CourseCredits as private memeber to protect our data from
unauthorized access.
we declare member Function like Display(),Grade(),Club_Assignment(),
Course_Information_Display(),Course Selection() of class Course and class student
as public to share information between different member of class.
We declared Constructor and Destructor of class Course and class student as public 
because we cannot assign any other access specifier to them.
In OOPS programming we prioritze data over functions and provide layer to security
to member variables to protect information stored inside member variables is not 
accessible by any aunauthorized entity.*/

#include<iostream>
using namespace std;
class Student
{
    private: string StudentName; int StudentID;
    float Marks;
    public: Student(string Name, int Id, float Mark)
    {
        StudentName=Name;
        StudentID=Id;
        Marks=Mark;
    }
    void Display()
    {
        cout<<"\nInformation Entered by the Student is: ";
        cout<<"\nName= "<<StudentName<<"\tStudent id is "<<StudentID<<"\t Marks are "<<Marks;
    }
};
class Course{
    public: string Coursename;int CourseID;int CourseCredits;
    public: Course(string Name,int ID,int Credits)
    {
      Coursename=Name;
      CourseID=ID;
      CourseCredits=Credits;
    }
    void Display()
    {
        cout<<"\n Course details:";
      cout<<"\nCourse Name is "<<Coursename<<"\t Course Id is "<<CourseID;
      cout<<"\nCourse Credits is "<<CourseCredits;
    }
};
int main(){
    Student obj("Payal",1,98);
    obj.Display();
    Course obj1[2]={{"Ram",60,4},{"Sham",45,5}};
    int i;
    for(i=0;i<=1;i++){
        obj1[i].Display();
    }
}

