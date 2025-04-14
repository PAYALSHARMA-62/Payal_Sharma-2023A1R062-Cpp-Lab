/*Demonstrate the working of array Initialization using Accept Method*/
#include<iostream>
using namespace std;
class Program
{
    private: int a[5]; int i;// Declaration of Array
    public: void Accept()
    {
        //Initialized Array elements using Accept Method(using any type of loop)
            int i;
            for(i=0;i<=9;i++){
                cout<<"\nEnter Array elements: ";
                cin>>a[i];
            }
    }
    public: void Display()
    {
        cout<<"Arrray elements enetred by the user is: ";
        for(i=0;i<=9;i++){
        cout<<"\n Array "<<a[i];
        }
    }

};
int main()
{
    Program obj;
    obj.Accept();
    obj.Display();
    return 0;
}