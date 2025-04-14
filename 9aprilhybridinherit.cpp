/*5. Hybrid Inheritance
Combining 2 or more than 2 differeent types of inheritance to form hybrid
inheritance.
In some situation, when we r trying to access base class function with derived
class in hybrid inheritance inheritance, compiler raise error that function is ambigious in nature
as more than 1 path exists in the code to reach base class function and compiler
confused to select the path and raise this ambiguity error.
To solve this error we use scope resolution operator or virtual inheritance.*/
#include<iostream>
using namespace std;
class Parent{
    public: Parent(){
        cout<<"\nParent class constructor";
    }
    public: ~Parent(){
        cout<<"\nParent class Destructor";
    }
     void Fun1(){
        cout<<"\n Parent class function";
    }
};
class child1 : public Parent{
    public: child1(){
        cout<<"\nChild1 class Constructor";
    }
        public: ~child1(){
            cout<<"\nChild1 class Destructor";
        }
        void Fun2(){
            cout<<"\n Child1 class function";
        }
};
class child2 : public Parent{
    public: child2(){
        cout<<"\nChild2 class Constructor";
    }
        public: ~child2(){
            cout<<"\nChild2 class Destructor";
        }
        void Fun3(){
            cout<<"\n Child2 class function";
        }
};
class child3 : public child1, public child2{
    public: child3(){
        cout<<"\nChild3 class Constructor";
    }
        public: ~child3(){
            cout<<"\nChild3 class Destructor";
        }
        void Fun4(){
            cout<<"\n Child3 class function";
        }
};
int main(){
    child3 obj;
    // obj.Fun1(); This will raise ambigious function error, to resolve this error
    // we use scope resolution with class name via which we want to access
    // parent class function
    obj.child1::Fun1(); //or
    obj.child2::Fun1();
    obj.Fun2();
    obj.Fun3();
    obj.Fun4();
}