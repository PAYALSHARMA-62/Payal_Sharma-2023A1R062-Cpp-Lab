/* program to demonstrate working of constructor
Constructor with no parameter or default vslues*/
#include<iostream>
using namespace std;
class program // class with name program
{
    public: program() // class Constructor
    {
        cout<<"Constructor called!";
    }
};
int main()
{
    program obj; // class object
    return 0;
}