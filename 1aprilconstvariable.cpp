

/* Mutable and Immutable(Read Only) form of data    1/04/25    */
// -----Example 1------ of Constant Variable as a member variabe of class  directly
// #include<iostream>
// using namespace std;
// class Program
// {
//     public: const int a=1; //Constant Variable
//     void display()
//     {
//      cout<<"Value of a is "<<a; //Member function can access constant member of class 
//      //a=2; // This will raise an error, we cannot modify constant variable
//     }
// };
// int main(){
//     Program obj;
//     obj.display();
// }



//------Example 2---------- passing Const variable as parameter in constructor and passing to local variable
#include<iostream>
using namespace std;
class Program
{
    public: int b; //Local Variable
    public:Program(const int a) //Constant Variable in Constructor
    {
        b=a; //passing value of constant variable to local variable
    }
    void display()
    {
     cout<<"Value of a is "<<b; //Member function can access constant member of class 
     //a=2; // This will raise an error, we cannot modify constant variable
    }
};
int main(){
    Program obj(4141);   /* like ac remote mein when u will give the value 24 so next time also it will be 24 as read only 
    passing to the local variable , no =w b is local v starting from a and b can modify further also as 
    b is not a const */
    obj.display();
}
