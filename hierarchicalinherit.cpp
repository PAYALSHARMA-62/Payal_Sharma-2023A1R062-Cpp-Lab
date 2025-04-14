/* 08/04/25
In Hierarchical Inheritance, a base class is extended by mutliple derived classes,
there is no relation between derived classes in hierarchical inheritance,
we cannot access attribute of a derived class in other derived class.
i.e in hierarchical inheritance there is single parent class and multiple child / derived classes 
that is **** Hierarchical inheritance is opposite of    Multiple inheritance **** */
#include<iostream>
using namespace std;
class Parent{
    public: Parent(){
        cout<<"\nParent Class Constructor";
    }
    public: void Fun1(){
        cout<<"\nParent Class Function";
    }
};
class Child1: public Parent{
    public: Child1(){
        cout<<"\nChild1 Class Constructor";
    }
public: void Fun2(){
    cout<<"\n Child Class 1 funciton";
}
};
class Child2: public Parent{
    public: Child2(){
        cout<<"\nChild2 class  Constructor";
    }
    public: void Fun3(){
        cout<<"\n Child Class 2 funciton";
    }
    };
    class Child3: public Parent{
        public: void Fun4(){
            cout<<"\n Child Class 3 funciton";
        }
        };

    int main(){
        Child1 obj;
        obj.Fun1(); //cannot able to access the derived member funciton but can access their own and parent class member fn or variables.
        obj.Fun2();
        Child2 obj1;
        obj1.Fun1();
        obj1.Fun3();
        Child3 obj2;
        obj2.Fun1();
        obj2.Fun4();
        return 0;
    }