/*
2. Multi level inheritance
Write a Program
a. create a base class with name MyApp
b. create a function Message(), display welcome message on screen
c. Create a function Login() accept pin from user and validate pin against value 123
and return Message 'Yes' or 'No'
d. Create a derived class with name StudentInfo
e. create a function Accept() store student information like name,Registration 
number, course name but only when user Login Successfully.
f. Create a function Display() to display student details.
g. create one more derived class with name grade_calc, this will take
inheritance from StudentInfo class.
h. Createe a function cal(), this function will accept marks from Accept() function
of studentInfo class and calculate percentage aand grade a sper folowing:
Percentage between 80 to 100 A
Percentage between 70 to 80 B
Percentage between 60 to 70 C
otherwise not Qualified

*/

// agr hum grand chilld clas ki jga parent class aur child class ka object create kr da toh
// error nhi aata but logically incorrect hai.

#include<iostream>
using namespace std;
class MyApp{  // parent class
    public: int pin1=123, pin2;
    public: void Message(){
        cout<<"Welcome to My application!";
    }
    public:  string Login(){
        cout<<"\nEnter your pin";
        cin>>pin2;
        if(pin1==pin2){
            cout<<"\nLogin Successfully";
            return "Yes";
        }
        else{
            cout<<"\nlogin failed";
            return "No";
        }
    }
};
class StudentInfo: public MyApp{   // derived class
    public: string name; int rn;
    int marks;
 public:void Accept(){
    cout<<"\nEnter name and regno: ";
    cin>>name>>rn;

 }
 public: void Display(){
    cout<<"Name and regno is "<<name<<"\t"<<rn;

 }
};
class Grade_Calc: public StudentInfo{
    float per, marks;
    public: char Grade_asign(){
        cout<<"\nEnter marks:";
         cin>>marks;
         cout<<"marks are"<<marks;
        per=(marks/500)*100;
        cout<<"\t"<<per;
        if(per>=80 && per<=100){
        cout<<"A grade is assigned";
        return 'A';
    }
    else if(per>=70 && per<=80){
        cout<<"\nB is assigned";
        return 'B';

    }
    else if(per>=60 && per<=70){
        cout<<"\nC grade is assigned";
        return 'C';

    }
    else{
        cout<<"\nNot Qualified";
    }
}
};

int main(){
   Grade_Calc obj;
    obj.Message();
    string res;
    char res1;
   res= obj.Login();
   if(res=="Yes"){
    obj.Accept();
    obj.Display();
    res1=obj.Grade_asign();
}
    else{
        cout<<"Memory freed!";
    }
}