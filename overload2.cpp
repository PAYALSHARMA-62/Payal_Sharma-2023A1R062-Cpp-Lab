/*Demonstrate working of function overloading and constructor overlaoding
create a class with name LoginApp, with function name Register(),
overload this function three times in this program
1. Register function will accept user name and dispaly "Hi message with username."
2. Register function will accept Registeration Number and Validate Registration 
number between(1 to 50)
3. Register function will accept Marks and Calculate Credits, for every 10 marks 
provide 1 credit(Max 100)
4. create default constructor of class, display message"Welcome to LoginApp"
5. create parameterized constructor of class,that accept Login credentials,
like Login Pin.
*/
#include<iostream>
using namespace std;
class LoginApp
{
    private: string name;
  /*  public: void Register()
{
   cout<<"\nEnter username: ";
   cin>>name;
   cout<<"Hi "<<name;
}*/
   public: void Register()   
   {int RegNo;
   cout<<"\nEnter registeration number: "<<RegNo;
    if(RegNo>=1 && RegNo<=50)
    {
    cout<<"\nRegisteration accepted!";
    cout<<"\nNumber is Validate!";
    }
    else
    {
    cout<<"\nNot found!";
   }
}
public: void Register(float Marks)
{float Credits;
   cout<<"\nEnter marks: "<<Marks;
   if(Marks>=0 && Marks<=100)
   {
    cout<<"\nCalculate Credits: ";
   Credits= Marks/10;
   cout<<"\nCredits are: "<<Credits;
   }
   else{
    cout<<"\nInvalid Marks";
   }
}
 public: LoginApp()
 {
     cout<<"\nWelcome to LoginApp!";
 }
      public: LoginApp(int PinNo)
     {
          cout<<"\nEnter Pin Number: "<<PinNo;
          if(PinNo==1234)
          {
            cout<<"\nLogin Successful!";
          }
          else{
            cout<<"\nLogin failed!";
          }
     }
 };
int main()
{
    LoginApp obj;
    obj.Register();
    obj.Register(20);
    obj.Register(70.5);
     LoginApp(1234);
}
