/*Demonstarate Array Declaration and Array Initialization
using Direct Method*/
#include<iostream>
using namespace std;
class ArrayProgram{
    private: int a[5]={1,2,3,4,5}; // Array Declaration
    //int b[5]={1,2,3,4,5};
    public: void Display()
    { 
    // a[0]=10; //Initilaized of Array elements at index 0 using Direct method
    // a[1]=5;//Initilaized of Array elements at index 1 using Direct method
        cout<<"\nArray Element value at index 0: "<<a[0];
        cout<<"\nArray Element value at index 1: "<<a[1];
        cout<<"\nArray Element value at index 2: "<<a[2];
        // cout<<"\nEnter array element: ";
        // cin>>a[3];   // else this way if we want to take value from user
        // cout<<"Array element value at index 3 is: "<<a[3];
    }
};
int main()
{
    ArrayProgram obj;
    obj.Display();
}
