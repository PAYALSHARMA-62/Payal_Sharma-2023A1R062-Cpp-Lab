/* Multiple Inheritance*/
#include<iostream>
using namespace std;
class Parent1{
    public: Parent1(){
        cout<<"\nParent 1 class constructor";
    }
    void Fun1(){
        cout<<"\nParent 1 class Function";
    }
};
class Parent2{
    public: Parent2() {
        cout<<"\nParent 2 class constructor";
    }
    void Fun2(){
        cout<<"\nParent 2 class Function";
    }
};
//class child: public Parent1, public Parent2{ // jo parent class jis sequence mai likhugi uss sequence
                                                // mai constructor call honga
 class child: public Parent2, public Parent1{    
public: child(){
        cout<<"\nChild class constructor";
    }
    void Fun3(){
        cout<<"\nChild class Function";
    }
};
int main(){
 child obj;
}