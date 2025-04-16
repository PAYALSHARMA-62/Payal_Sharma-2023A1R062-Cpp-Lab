/* Virtual Function and Pure Virtual Function: tell compiler .that this function is
going to overriden by derived class function to ensure run time polymorphisim.
 */
#include<iostream>
using namespace std;
class A{
    public: virtual void Fun1(){ //Virtual function
        cout<<"Virtual Function in class A";
    }
};
class B{ // ABstract  class
    public: virtual void Fun2()=0; //Pure virtaul function
};
class C: public A{
    public: void Fun1() override{
        cout<<"I am a updated version of class A function";
    }
};
class D: public B{
    public:void Fun2() override{
        cout<<"I am having implementation code of class B function";
    }
};
int main(){
    C obj;
    obj.Fun1();
    D obj1;
    obj1.Fun2();

}