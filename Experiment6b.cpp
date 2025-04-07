// To get the details of course by course_id using a member function of course class.
#include<iostream>
using namespace std;
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
    cout<<"\nCourse Name is "<<Coursename<<"\t Course Id is "<<CourseID;
    cout<<"\nCourse Credits is "<<CourseCredits;
  }
  public: ~Course(){
    cout<<"\nMemory Freed!";
  }
  int search(){
    int Courseid1;
    cout<<"\n Enter your Course Id ";
    cin>>Courseid1;
    return Courseid1;
}
};
int main()
{
  Course obj[5]={{"C",1,8},{"C++",2,6},{"Java",3,4},{"SQL",4,12},{"PHP",5,16}};
  int i,Courseid2;
  for(i=0;i<=4;i++){
  obj[i].Display();}
  Courseid2=obj[1].search();
     for(i=0;i<5;i++){
         if(Courseid2==obj[i].CourseID){
             cout<<"\n Course ID is valid ";
             cout<<"\n Course Name  is "<<obj[i].Coursename;
             cout<<"\n Course Credits are "<<obj[i].CourseCredits;        }
     }  
} 

