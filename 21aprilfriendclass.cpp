/* Program:- friend class
In BAnkApp, we create  a Friend class Admin class as Friend class of BAnkApp class
which can access internal data of this class and can modify it.
*/
#include<iostream>
using namespace std;
class Admin; //forward decalration of class
class BankApp{
    private: int Account_Number;
    string username;
    int Password;
    float Balance;
    public: BankApp(int Number, string user, int pass, float Bal){
        Account_Number=Number;
        username=user;
        Password=pass;
        Balance=Bal;
    }
    public: void Display(){
        cout<<"\n Username is "<<username;
        cout<<"\n Password is "<<Password;
        cout<<"\nAccount Number is "<<Account_Number;
        cout<<"\n Balance is "<<Balance;
    }
    friend class Admin; //Declaration friend class Admin inside this class
};
class Admin{
    private: int p=1111;
    public: void Reset_Pass(BankApp &obj){
        obj.Password=p;
    }
};
int main(){
    BankApp obj1(101,"Mahi",1234,10000);
    obj1.Display();
    cout<<"\nAfter password resetting";
    Admin obj2;
    obj2.Reset_Pass(obj1);
    obj1.Display();
    return 0;
}