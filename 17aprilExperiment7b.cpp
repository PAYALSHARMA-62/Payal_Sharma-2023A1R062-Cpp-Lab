/*Implement Polymorphism for member function in UG class, PG class and Diploma class
Polymorhism: Function overloading and function overriding
writa program to
a. Create a base class with MYStudyApp,
b. Create a function Login()
overload this function for Admin(), student and Guest login,
c. Login function for Admin has two Paramters username(admin) and Pin(121)
d. Login Function for Student has 1 paramter(Register, RAnge b/w 1 to 100)
e.. Login Function for guest has no paramter
f. Create a function Greet() as pure virtaul function of this class,
g. Create a function Accept() to store user information
h. Create a function Display() to display user information
i. craete a Derived class UG_class
j. Accept choice from user to login as Admin, Student or Guest, according to user's
choice invoke base class Login() Function, Now Override base class functions
Greet() this function will Greet user with custom message e.g Welcome Admin,
override Accept() and Display() Function store and Display user details for
student Admission in UG_class.
k. Create a derived class PG_Class
accept choice from user To Login as Admin, Student or Guest, According to user's
choice invoke base class Login() Function, Now Override base class function*/

#include<iostream>
using namespace std;
class MyStudyApp{
    public: string uname,gname, sname, std, User, cname; int p,regno;
    public: void Login(string username, int pin){
    cout<<"\nAdmin Logged-in: ";
    uname=username;
    p=pin;
    if(p==121){
        cout<<uname;
    }
    else{
        cout<<"\ninvlaid pin";
    }
    }
    public: void Login(int RegNo){
        regno=RegNo;
        if(regno>=1 && regno<=100){
        cout<<"\nStudent Logged-in";
        cout<<sname;
        }
        else{
            cout<<"\nInvalid RegNo.";
        }
    }
    public: void Login(){
        cout<<"\nGuest Logged-in";
        cout<<"\nenter gnmae ";
        cin>>gname;
    }
    
    public: virtual void Greet() = 0; //pure virtual function

    public: virtual void Accpet(){
        cout<<"\nStoring the user inforamtion: ";
        cout<<"\nenter the username";
        cin>>User;
        cout<<"\nenter the class of student";
        cin>>std;
        cout<<"\nenter the course name";
        cin>>cname;
    }
    public: virtual void display(){
        cout<<"\nusername is "<<User;
        cout<<"\nstudent class is "<<std;
        cout<<"\ncourse taken = "<<cname<<"\n";
    }
    
};
class UG: public MyStudyApp{
public :string choice,studname,per,UG_COURSE;
public:  void ch(){
    cout<<"\nenter the choice as Admin / Student / Guest for UG ";
    cin>>choice;
    if(choice=="Admin"){
        Login("Mahi", 121);
        Greet();
    }
    else if(choice=="Student"){
        Login(78);
        Accpet();
        display();
        Greet();
    }
    else if(choice=="Guest")
    {
        Login();
        Greet();
    }
    else{
        cout<<"\nInvallid Choice";
    }
}
public: void Greet()override{
    cout<<"\nWelcome "<<choice<<" "<<studname<<"\n";

}
public: void Accpet() override{
    cout<<"\nStore and Display User Detail for Student Admission in UG_Class";
    cout<<"\nenter the name ";
    cin>>studname;
    cout<<"\nenter the stud percentage ";
    cin>>per;
    cout<<"\nenter the UG course student wants to take ";
    cin>>UG_COURSE;
    cout<<"\n";
    
}
public: void display() override{
cout<<"\nthe student name is "<<studname;
cout<<"\nthe student percentage is "<<per;
cout<<"\nthe UG_Course taken = "<<UG_COURSE<<"\n";
}

};
class PG: public MyStudyApp{
    public :string PG_choice,PG_studname,PG_per, PG_COURSE;
    public:  void PG_ch(){
        cout<<"\nenter the choice as Admin / Student / Guest for PG ";
        cin>>PG_choice;
        if(PG_choice=="Admin"){
            Login("Mahi", 121);
            Greet();
        }
        else if(PG_choice=="Student"){
            Login(78);
            Accpet();
            display();
            Greet();
    
        }
        else if(PG_choice=="Guest")
        {
            Login();
            Greet();
        }
        else{
            cout<<"\nInvallid Choice";
        }
    }
    public: void Greet()override{
        cout<<"\nWelcome "<<PG_choice<<" "<<PG_studname<<"\n";
    
    }
    public: void Accpet() override{
        cout<<"\nStore and Display User Detail for Student Admission in PG_Class";
        cout<<"\nenter the name ";
        cin>>PG_studname;
        cout<<"\nenter the stud percentage ";
        cin>>PG_per;
        cout<<"\nenter the PG course student wants to take ";
        cin>>PG_COURSE;
        cout<<"\n";
        
    }
    public: void display() override{
    cout<<"\nthe student name is "<<PG_studname;
    cout<<"\nthe student percentage is "<<PG_per;
    cout<<"\nthe PG_course taken = "<<PG_COURSE<<"\n";
    }
    
};

int main(){
    UG obj1;
    obj1.ch();   
    // obj1.Greet();
    PG obj;
    obj.PG_ch();
    // obj.Greet();
    return 0;
    
}