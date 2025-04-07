// To update the details of course using a member function of course class
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
public : void Update(){
    cout<<"\nEnter updated CourseCredits";
    cin>>CourseCredits;
    cout<<"\nCourse Records After Updation";
    Display();
    }
};
int main()
{
  Course obj[5]={{"C",1,8},{"C++",2,6},{"Java",3,4},{"SQL",4,12},{"PHP",5,16}};
  int i,CID;
  for(i=0;i<=4;i++){
  obj[i].Display();}
  cout<<"\n Enter your CourseID to update Your Information";
    cin>>CID;
    for(i=0;i<5;i++){
        if(obj[i].CourseID == CID){
            cout<<"\n You have entered valid Course Id";
            obj[i].Update();
        }
    }
} 

