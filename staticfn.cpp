/*Program to demonstrate working of static function in program
1. Static functions belongs to class rather than instance of class.
2.can be accessed using class name e.g Program::Fun()
3.can access static member only, cannot access non static members of class because 
they require instance of class for memory initialization.*/

#include<iostream>
using namespace std;
class Program{
    public: int a=5; //non static variable
    static int b; //static variable
    void Fun1() //non static function
    {
        cout<<"\n(Fun1) Value of a is: "<<a; //nonstatic function can access both
        cout<<"\n(Fun2) Value of b is: "<<b; //non static and static vaariable
    }
    static void Fun2(){ //static function
        //cout<<"\n(Fun2) Value of a is: "<<a; //not able to access non static variable a
        cout<<"\n(Fun2) Value of b is: "<<b; //can access static variable only
    }
};
int Program::b=1;
int main(){
    Program obj;
    obj.Fun1();
    Program::Fun2();
}