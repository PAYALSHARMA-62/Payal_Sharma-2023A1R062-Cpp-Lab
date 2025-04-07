// To delete the details of course using a member function of course class.
#include<iostream>
using namespace std;
class Course{
  public: string CourseName;int CourseID;int CourseCredits;
  public: Course(string Name,int ID,int Credits)
  {
    CourseName=Name;
    CourseID=ID;
    CourseCredits=Credits;
  }
  void Display()
  {
    cout<<"\nCourse Name is "<<CourseName<<"\t Course Id is "<<CourseID;
    cout<<"\nCourse Credits is "<<CourseCredits;
  }
  public: ~Course(){
    cout<<"\nMemory Freed!";
  }
};
  void Delete(Course *pobj){
    pobj->CourseName=" ";
    pobj->CourseID=0;
    pobj->CourseCredits=0;
  }

int main()
{
  Course obj[5]={{"C",1,8},{"C++",2,6},{"Java",3,4},{"SQL",4,12},{"PHP",5,16}};
  int i;
  for(i=0;i<=4;i++){
  obj[i].Display();}
  cout<<"Enter CourseName which you want to delete: "<<obj[i].CourseName;
  cout<<"\nDeleteed Record!";
    Delete(&obj[i]);
    obj[i].Display();
    for(i=1;i<=4;i++){
        obj[i].Display();}
} 

