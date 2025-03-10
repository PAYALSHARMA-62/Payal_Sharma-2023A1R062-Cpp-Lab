/* To create a course Class, its constructor,destructor and member  functions
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
} */

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
    //Here Accept Student Percentage,Attendance and assign Course According to
    /*1.Percentage greater than 80 or attendance more then 90, course option all
     2. Percentage between 70 to 80 or attendance more then  80 Course option java
     3. Percentage between 60 to 70 or attendance more than  70 Course option CPP
    4. Percentage between 60 to 70 or attendance more then  60 Course option PHP
     5. Percentage between 50 to 60 or attendance more then  50 Course option C
    */
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