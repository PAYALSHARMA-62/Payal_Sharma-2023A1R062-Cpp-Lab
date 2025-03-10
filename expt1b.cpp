/*To create a student class its constructor, destructor and member functions*/
/* #include<iostream>
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
        //getline(cin,Name); // if i want space between the record details during input
        cin>>Name;
        cout<<"\nEnter DOB: ";
        cin>>DOB;
        cout<<"\nEnter Dept: ";
        cin>>Dept;
        cout<<"\nEnter batch year";
        cin>>Batch;
        //cin>>Name>>DOB>>Dept>>Batch;
        cout<<"\nDetails of student named "<<Name <<" is "<<"\n"<<DOB<<"\n"<<Dept<<"\n"<<Batch<<"\n";
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

}*/

 #include<iostream>
using namespace std;
class Student
{
    public: string StudentName; int StudentID; string grade;
    float Marks, per;
    public: Student(string Name, int Id, float Mark)
    {
        StudentName=Name;
        StudentID=Id;
        Marks=Mark;
    }
    void Display()
    {
        cout<<"\nInformation Entered by the Student is: ";
        cout<<"Name= "<<StudentName<<"\tStudent id is "<<StudentID<<"\t Marks are "<<Marks;
    }
    public: char Grade(){   
        per=Marks/500*100;
        if(per>=80 && per<=100)
        {
            cout<<"\nYour Grade is A";
            return 'A';
        }
        else if(per>=70 && per<80){
            cout<<"\nYour Grade is B";
            return 'B';
        }
        else if(per>=60 && per<70){
            cout<<"\nYour Grade is C";
            return 'C';
        }
        else if(per>=50 && per<60){
            cout<<"\nYour Grade is D";
            return 'D';
        }
        else{
            cout<<"\nNot Qualified";
        }
    }
    public: void Club_assigned(char grade){
        if(grade=='A')
        {
            cout<<"\n Club NSS is assigned";
        }
        else if(grade=='B')
        {
            cout<<"\nClub ECO is assigned";
        }
        else if(grade=='C'){
            cout<<"\nClub IEEE is assigned!";
        }
        else if(grade=='D'){
            cout<<"\nClub Sports is assigned";
        }
        else{
            cout<<"\nNo Club assigned";
        }
    }
};
int main()
{
    Student obj[5]={{"Ram",101,450},{"Sham",102,480},{"Sita",103,350},{"Gita",104,260},{"Raman",105,980}};
    int i; char res;
    for(i=0;i<5;i++){
        cout<<"\nInformation of student with id "<<obj[i].StudentID;
        obj[i].Display();
        res=obj[i].Grade();
        obj[i].Club_assigned(res);
    }
}


