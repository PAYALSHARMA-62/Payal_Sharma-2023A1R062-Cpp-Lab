#include<iostream>
using namespace std;
class Program1
{
   private : int pin;
    public : int validate()//2type // function with return type and no parameter
    {
        cout<<"Enter your pin"; 
        cin>>pin;
        if(pin == 1234)
        {
            return 1;
        }
        else                                                 // *****like ATM Transaction****
        {
            return 0;
        }
    } 
    public : void display_balance(int Amount)//3type// function with no return type and parameter
    {                                  //parameter matlab dusre function ki working pr depend krage jaise pin validate hogi tbhi
                                             // balance show hoga nhi too nahi
        cout<<"\n your balance is"<<Amount;
    }
    public : void Fun()
    {
        cout<<"hi\n";
    }
}; 
int main() 
{
Program1 obj; 
int res;
int amt=10000;
obj.Fun(); //pehle jo fun. likege vo execute hoga
res = obj.validate();
if(res==1){
    cout<<"Authentication successful";// validate hori ha validate fn se //
    obj.display_balance(amt);// amt is actual parameter
}
else
{
    cout<<"Authentication Fail";
}
return 0; 
} 