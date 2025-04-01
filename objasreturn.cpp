// Method 1 Return as value
// Program to demonstrate working of returning object from function
#include<iostream>
using namespace std;
class Program{
    public:int a; // class member variable
    Program(int b) //Parametrized constructor of class
    {
        a=b;
    }
    void display(){
        cout<<"\nValue of a is: "<<a;
    }
};
Program fun() //function with return type as class
{             // this function will return obj as value
Program obj(10);
return obj;}
int main(){
    Program obj2=fun(); // calling fun function from class object1 a swhen this
    obj2.display();
    return 0;// is called it will return a object
                // to store its return vlaue, we use class object
}
