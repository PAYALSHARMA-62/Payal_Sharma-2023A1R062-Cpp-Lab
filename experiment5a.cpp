// To add the details of a course using aparmetrized constructor of course class.
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
  private:float per;int attend;
  public:void CourseAssignment(){
    cout<<"\nEnter percentage and attendance:";
    cin>>per>>attend;
    if(per>80 || attend>90 )
    {
      cout<<"\nCourse option all";
    }
    else if(per>70 && per<=80 || attend>80 )
    {
      cout<<"\nCourse option java";
    }
    else if(per>60 && per<=70 || attend>70 )
    {
      cout<<"\nCourse option CPP";
    }
    else if(per>60 && per<=70 || attend>60 )
    {
      cout<<"\nCourse option PHP";
    }
    else if(per>50 && per<=60 || attend>50 )
    {
      cout<<"\nCourse option C";
    }
    else{
      cout<<"No course alloted";
    }
  }
};
int main()
{
  Course obj[5]={{"C",1,8},{"C++",2,6},{"Java",3,4},{"SQL",4,12},{"PHP",5,16}};
  int i;
  for(i=0;i<=4;i++){
  obj[i].Display();}
  obj[i].CourseAssignment();
} 

