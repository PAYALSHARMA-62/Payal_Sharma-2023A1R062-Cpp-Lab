/*Program to demonstrate the use of constant variable, constant function*/
#include<iostream>
using namespace std;
class Program{
    public: const int a=1; // Constant variable
    int b=2;
    public: void Fun1()const{ //constant function can only read values
        cout<<"value of a and b is"<<a<<"\t"<<b;
       // a++; //This will raise error as we cannot modify value of constant variable
        //b++; // variable or normal variable
        // Constant function will not modify value of any variable inside its function definition

    }
    public: void Fun2(){ //Normal Function
        cout<<"Value of a and b is "<<a<<"\t"<<b;
        //a++; //This will raise an erroras we cannot modify value of consatant variable
        // after initialization.
        b++;
    }
};
int main(){
const Program obj1; //Constant object of class,can call only constant member
// of class
obj1.Fun1();
//obj1.Fun2(); //This will raise an error as constant object cannot normal object
Program obj2; //Normal object of class
obj2.Fun1(); //can call both constant and normal value of class
obj2.Fun2();
return 0;
}