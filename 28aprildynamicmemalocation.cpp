/*Program: Dynamic Memory Allocation using new and delete*/
#include<iostream>
using namespace std;
class Student{
public: float marks; string Sname;
void Display(){
    cout<<"\nName= "<<Sname;
    cout<<"\nMarks are "<<marks;
}
};
int main(){
    Student *obj=new Student();
    //Syntax class name pointer to object name= new class name();
    //Ensure to allocate memory to object at runtime;
    obj->marks=555;
    obj->Sname="user1"; //acccessing and allocating value to members of class using pointer
    obj->Display();
    delete obj; //deleting object to ensures that the memory of object will deallocate
                // after program execution
    obj->Display();
    return 0;
}