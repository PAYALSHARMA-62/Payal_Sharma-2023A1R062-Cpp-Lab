/* write a program to create a class with normal variable a, with a static variable b, a normal function fun1(), 
static function Fun2(), create a default constructor of class, parametrized constructor of class, 
destructor of class, create normal instance of class,
static instance of class, access static variable and normal variable from Fun1() and Fun2(). define with comments, the output 
and behaviour of each variable, function, object in this program.   20/03/25 */

#include<iostream>
using namespace std;
class P{
    public: int a=2,d,e;
    public: static int b;
    public: P(){
        cout<<"\nwelcome simple constructor called ";
    }
    public: P(int c, int d){
        d=c;
        e=d;
        cout<<"\nd and e "<<a<<" and "<<b;
        cout<<"\nparametrized constriuctor called ";
        

    }
    public:  void fun1(){
        
      cout<<"\n the value of a "<<a;
      cout<<"\n the value of b "<<b;
    }
   public: static void fun2(){
   cout<<"\nspace rocket ";
   //cout<<"\n the value of a"<<a;
      cout<<"\n the value of b "<<b;
   }
   public: ~P(){
    cout<<"\ndestructor called";
   }
};
int P::b=90;
// void funns(){
//  static P obj;
//     static P obj1(3,9);
//     obj.fun1();
//     obj.fun2();
    

// }
int main(){
P obj;
  P obj1(3,8);
    obj.fun1();
    obj.fun1();
    cout<<"2nd fn called\n";
    obj1.fun2();
    obj1.fun2();
    // funns();
    // funns();
    return 0;

}
