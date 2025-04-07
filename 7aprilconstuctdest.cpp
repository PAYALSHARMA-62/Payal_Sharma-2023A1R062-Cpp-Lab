/* Inheritance and constructor, Destructor
In Inheritance constructor follows Top to Bottom Appproach, first base class constructor
will called and then child class constructor.
Destructor follows Bottom to Top Approach,  first child class destructor 
called and then parent class.
*/
#include<iostream>
using namespace std;
class Parent{
    public:Parent() //Base class Constructor
    {
        cout<<"Parent class Constructor";
    }
    void Fun1(){ //BAse class Function
        cout<<"\nParent class Function";
    }
    public:~Parent() //Base class Constructor
    {
        cout<<"\nParent class Destructor";
    }
};
class child: public Parent // child class extending parent class
{
    public: child(){ //Derived class 1 onstructor
        cout<<"\nChild class Constructor";
    }
   void Fun2(){ //Derived class 1 function
        cout<<"\nChild class Function";
    }
    public: ~child(){ //Derived class 1 onstructor
        cout<<"\nChild class Destructor";
    }
};
class Grand_child: public child // Grand child class extending child class(To implement multi level inheritance)
{
    public: Grand_child() //Derived class 2 constructor
    {
        cout<<"\nGrand child class constructor";
    }
    void Fun3(){ //Derived class 1 function
        cout<<"\nGrand Child class Function";
    }
    public: ~Grand_child() //Derived class 2 constructor
    {
        cout<<"\nGrand child class Destructor";
    }
};
int main(){
   Grand_child obj;
}