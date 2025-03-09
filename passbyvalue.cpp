/*Method 1. Pass by value
Program to demonstrate working of passing object as parmeter to function.*/
#include<iostream>
using namespace std;
class Program
{
    public: int a;
    public: Program(int b){
        a=b;
    }
    public: void Display()
    {
        cout<<"\n value of a is "<<a;
    }
};
void modify(Program obj2){ //Modify function accepts obj2 as parameter 
    obj2.a=10; // Any change inside this function will not modify original value of a.
    // this will create separate instance of program class.
    cout<<"\nModified value: "<<obj2.a;
}
int main()
{
    Program obj1(9); // originaal object of class with initialization of parametrized constructor
obj1.Display();
modify(obj1); //Calling modify function
obj1.Display();
}