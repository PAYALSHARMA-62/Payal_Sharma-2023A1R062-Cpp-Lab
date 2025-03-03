#include<iostream>
// #include is predefined function
// iostream have definition of all predefined input and output functions used in this
// program
using namespace std;
// using 
class program1{
    private:int pin;
    public :int validate()
    {
        cout<<"Enter your pin";
        cin>>pin;
        if(pin==1234)
        {
            return 1;
        }
        else{
            return 0;
        }
    }
    public:void Display_Balance(int Amount)
    {
        cout<<"\n Your Balance is "<<Amount;
    }
    public:void Fun()
    {
        cout<<"Hi";
    }
    };
    int main(){
        program1 obj;
        int res;
        int amt=1000;
        obj.Fun();
        res=obj.validate();
        if (res==1)
        {
            cout<<"Authentication Successful";
            obj.Display_Balance(amt);
        }
            else{
                cout<<"Authentication Fail";
            }
            return 0;
        }
    
