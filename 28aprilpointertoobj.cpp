/* Program: Pointer to object*/
#include<iostream>
using namespace std;
class Program{
    public: int RegNo; string name;
    public: Program(int Number, string Name){
        RegNo=Number;
        name=Name;
    }
    public: void Display(){
        cout<<"\nName= "<<name;
        cout<<"\nRegistration Number= "<<RegNo;
    }
};
int main(){
    Program obj1(1,"User1");
    Program *obj2=&obj1; //Pointer to object(*obj2 Pointer pointing to address of object obj1)
    obj2->Display(); //Accessing class member function using pointer to object
    obj2->name="User2"; //modifying class emmber variable using Pointer to object
    obj2->Display();
    return 0;
}