/*create class with name bank
b. member variable with name balance
c.parametrized constructor to initialize member variable
d. display() function to display updated balance
e. function with name NetBanking()// return obj
this function will deposit amount and add this amount with balance
*/
#include<iostream>
using namespace std;
class Bank{
    public: int balance;
    public: Bank(int bal){
    balance=bal;
    }
    void Display(){
        cout<<"\n Updated Balance: "<<balance;
    }
};
Bank NetBanking(Bank obj1){
    int amt;
    cout<<"\nenter amt: ";
    cin>>amt;
    cout<<"amount is: "<<amt;
     obj1.balance=obj1.balance+amt;
    return obj1;
}
int main()
{
    Bank obj2(2000);
    obj2.Display();
     obj2=NetBanking(obj2);
     obj2.Display();
    return 0;
}