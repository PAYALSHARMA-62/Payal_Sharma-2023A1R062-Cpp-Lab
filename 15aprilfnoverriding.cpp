/* Function Overriding: Updation Base class function in derived class.
Basic Program*/
#include<iostream>
using namespace std;
class Base{
    public: Base(){
        cout<<"\nBase class Constructor";
    }
    public: ~Base(){
        cout<<"\nBase class Destructor";
    }
    virtual void Fun1(){ // we are declaring base class function as virtual to instruct
                        // Compiler to override this function at run time
    cout<<"\nBAse class Function";
    }
};
class Derived: public Base{
    public: Derived(){
        cout<<"\nDerived class Constructor";
    }
    public: ~Derived(){
        cout<<"\nDerived class Destructor";
    }
     void Fun1()override { //this keyword is optional not mandatory but here it
        // is a good practice to use this keyword so that compiler understands that
        // this function overriding base class..

    cout<<"\nDerived class Function";
    }
};
int main(){
    Derived obj;
    obj.Fun1();
}
