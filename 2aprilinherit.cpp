/*Inheritance: important feature of OPPS
Reusability is possible in software Application only because of Inheritance.
In inhertitance we use existing class features into new class but our new class
must have atleast 1 new feature.
Types of Inheritance in cpp:
1. Single Level Inheritance
2.Multi level inheritance
3.Multiple inheritance
4.hybrid Inheritance
5.hierarichal Inheritance*/
// Program Single level Inheritance

/*
#include<iostream>
using namespace std;
class MyApp{  // parent class
    public: void Message(){
        cout<<"Welcome to My application!";
    }
};
class Login: public MyApp //child class(syntax class child class name sign ofn inheritance
                          //inheritance: public base class)
{
private: int pin1=123, pin2;
public:  void Accept(){
    cout<<"\nEnter your pin";
    cin>>pin2;
    if(pin1==pin2){
        cout<<"\nLogin Successfully";
    }
    else{
        cout<<"\nlogin failed";
    }
}
};
int main(){
    Login obj;
    obj.Message();
    obj.Accept();
}
    
*/

/* Write a Program
a. create a base class with name MyApp
b. create a function Message(), display welcome message on screen
c. Create a function Login() accept pin from user and validate pin against value 123
and return Message 'Yes' or 'No'
d. Create a derived class with name StudentInfo
e. create a function Accept() store student information like name,Registration 
number, course name but only when user Login Successfully.
f. Create a function Display() to display student details.*/


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
class StudentInfo: public MyApp{
    public: string name; int rn;
 public: string Accept(){
    cout<<"\nEnter name and regno: ";
    cin>>name>>rn;
    cout<<"Name and regno is "<<name<<"\t"<<rn;
 }
 public: void Display(){
    cout<<"Name and regno is "<<name<<"\t"<<rn;
 }
};

int main(){
    StudentInfo obj;
    obj.Message();
    obj.Login();
    obj.Accept();
    obj.Display();
}