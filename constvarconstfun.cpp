// Program to demonstrate the use of constant variable, constant function, constant object in a program    2/04/25
#include<iostream>
using namespace std;
class Program
{
    public: const int a=1; //constant variable
    int b=2;
    public: void Fun1()const{ //Constant Function can only read values
        cout<<"\nvalue of a and b is "<<a<<"\t"<<b;
        //a++; //this will raise error as constant function cannot modify constant variable or normal variable (any member variable)
       // b++:
        //constant function will not modify value of any variable inside its function defintion 

    }
    public: void Fun2(){ //Noraml Function
        cout<<"\nvalue of a and b is "<<a<<"\t"<<b;
        //a++: //this will raise error as we cannot modify value of constant variable after its initialization.
        b++;

    }
};
int main(){
    const Program obj1; //constant object of class, can call only constant member of class 
    obj1.Fun1();
    //obj1.Fun2();// this will raise error as constant object cannot call normal object 

    Program obj; //Normal object of class can call both constant and normal member of class 
    obj.Fun1();
    obj.Fun2();


}