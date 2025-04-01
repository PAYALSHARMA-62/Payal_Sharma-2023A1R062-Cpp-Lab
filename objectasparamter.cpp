/*Program to demonstrate working of passing object as paramter to function
1. Pass by Value
2. Pass by Reference
3. Pass by Pointer
4. Pass by onstruct refernce*/
#include<iostream>
using namespace std;
class Program{
    public: int a=1;
    public:void Display(){
        cout<<"\nvlaue of a in class: "<<a;
    }
};
void method1(Program obj1) //Pass by value(create a separate copy of a)
{
   obj1.a=2;
   cout<<"\nModified value of a: "<<obj1.a;
}
void method2(Program &obj2) 
{
   obj2.a=2;
   cout<<"\nModified value of a: "<<obj2.a;
}
void method3(Program *pobj){
    pobj->a=3;
    cout<<"\nModified value of a: "<<pobj->a;
}
void method4(const Program obj2) //Pass by value(create a separate copy of a)
{
   //obj2.a=5; error ayyga kyunki update ni ho skta
   cout<<"\nModified value of a: "<<obj2.a;
}
int main(){
    Program obj;
    obj.Display();
    method1(obj);
    obj.Display();
    method2(obj);
    obj.Display();
    method3(&obj);
    obj.Display();
    method4(obj);
    obj.Display();
}