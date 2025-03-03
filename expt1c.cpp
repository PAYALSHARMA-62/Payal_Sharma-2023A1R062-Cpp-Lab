/* To create a course Class, its constructor,destructor and member  functions*/
#include<iostream>
using namespace std;
class Courses
{
    public: Courses()
{
    cout<<"Welcome to LoginApp!";
}
private: int pin;
  public: int Login()
  {
    cout<<"\nEnter login pin: ";
    cin>>pin;
    if(pin==2004)
    {
        cout<<"\nLogin Succesful!";
        return 0;
    }
    else{
        cout<<"\nTry again!";
        return 1;
    }
  }
  private: string Cname, Startdate, Enddate;
  int Cid, Cstatus;
  public: void Coursedetails()
  {
    cout<<"\nEnter course start date: ";
    cin>>Startdate;
    cout<<"\nEnter the Name of the course: ";
    cin>>Cname;
    cout<<"\nEnter CourseID: ";
    cin>>Cid;
    cout<<"\nEnter the Completion status of Course : ";
    cin>>Cstatus;
    if(Cstatus>=0 && Cstatus<=50)
    {
      cout<<"\nYou will get B grade!";
    }
    else
    {
      cout<<"\nYou will get A+ grade!";
    }
    cout<<"\nEnter Course end date: ";
    cin>>Enddate;
  }
  void Display()
  {
    cout<<"\nDetails are: ";
    cout<<"\nCourse start date is: "<<Startdate;
    cout<<"\nName of course is: "<<Cname;
    cout<<"\nCourseID is: "<<Cid;
    cout<<"\nCourse end date is: "<<Enddate;
    cout<<"\nCompletion Staus "<<Cstatus;
  }
  public: ~Courses()
  {
    cout<<"\nDestructor freed memory!";
  }
};
int main()
{
  Courses obj;
  int res;
  res=obj.Login();
  if(res==0)
  {
   obj.Coursedetails();
   obj.Display();
  }
  else {
    cout<<"No record!";
  }
}