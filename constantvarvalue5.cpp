/* Write a program to                 1/04/25
a.  create a constant variable a initialize with value 5
b.  create a local variable b initialize with value 6
c.  create a constant function modify() and increment value of a and b by 2 inside function definition.
d.  create a member function update() and increment value of a and b by inside this function definition.
write your observation in detail using comments */


#include<iostream>
using namespace std;
class dog
{
public: const int a=5;
public: int b=6;
public: void update() {
    //a=7; //--gives error
    b=b+2;
    cout<<"value of a is: "<<a;
    cout<<"\nvalue of b is: "<<b;
}
// public: void update(int av, int bv) const {
//    //a=7; //--gives error
//   // a=av;
//   // b=bv;
//   // b=b+2;
//    cout<<"value of a is: "<<av;
//    cout<<"\nvalue of b is: "<<bv;
// }
};
 void modify(dog obj)  {
  //obj.a=2; //-- gives error
    obj.b=obj.b+2;  
    cout<<"\nvalue of a is: "<<obj.a;
    cout<<"\nvalue of b is: "<<obj.b;
 }
 int main(){
    dog obj;
    obj.update();
    modify(obj);
 }
    
