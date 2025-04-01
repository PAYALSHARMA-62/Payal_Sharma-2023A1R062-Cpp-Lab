/*Declaring Static Variable inside function and inside class
important point:static variable declared inside the class and initialized outside the class */
#include<iostream>
using namespace std;
class UserCount{
    public: static int count; //static variable inside class
    //void counter(){
    UserCount(){
        count++;
    }
    void Display(){
        cout<<"Usera are "<<count<<endl;
    }
};
int UserCount::count=0; //initialized outside the class
int main(){                 //using syntax dataype class name scope resolution operator and
    UserCount user1,user2;
      //user1.counter(); // static variable name
    user1.Display();
    //user2.counter();
    user2.Display();
    return 0;
}
// agr function diya toh value increment hogi aur
//agr constructor diya toh same value print hogi