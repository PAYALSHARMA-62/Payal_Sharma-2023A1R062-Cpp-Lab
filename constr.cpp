/* demonstrate the working execution of constructor, destructor and other functions*/
#include<iostream>
using namespace std;
class program
{
    //private: int a=5;
    public: program(){ // default constructor
        cout<<"the value of a=5";
    }
    public: void Fun2()
    {
        cout<<"\nFunction 2!";
    }
    public: void Fun1()
    {
        cout<<"\nFunction 1";
    }
    public: ~program() // destructor called
    {
        cout<<"\nFree Memory!";
    }
};
int main()
{
    program obj;
    obj.Fun1();
    obj.Fun2();
    return 0;
}