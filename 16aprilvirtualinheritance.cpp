/* in Inheritance
when we access parent class function from child class object due to multiple paths,
compiler raise an error known as function error or Diamond problem.*/
#include<iostream>
using namespace std;
class Parent{
    public: void Fun1(){
        cout<<"Parent class function";
    }
};
class child1:virtual public Parent{
    public: void Fun2(){
        cout<<"\nchild1 class function";
    }
};
class child2: virtual public Parent{
    public: void Fun3(){
        cout<<"\nChild2 class function";
    }
};
class child3: public child1, public child2{
    public: void Fun4(){
        cout<<"\nchild3 class function";
    }
};
int main(){
    child3 obj;
    obj.Fun1(); //This will raise an error ambigious function(Diamond Problem)
    obj.Fun2();
    obj.Fun3();
    obj.Fun4();
}