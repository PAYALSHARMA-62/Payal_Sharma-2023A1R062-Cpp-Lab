/*Program in cpp to create a class with name Area, deafult constructor of class
which set radius value 5, and function() with name calculate(), this function
will calculate Area of circle(3.14*Radius*RAdius),finally create destructor to free
memory of used variables*/
#include<iostream>
using namespace std;
class Area
{
    private: int Radius;
    public: Area(){ // default constructor
        cout<<"Enter radius: ";
        cin>>Radius;
        cout<<"the value of Radius= "<<Radius;
    }
    private: int res;
    public: void Calculate()
    {
        res= 3.14*Radius*Radius;
        cout<<"\nArea of circle= "<<res;
    }
    
    public: ~Area() // destructor called
    {
        cout<<"\nFree Memory!";
    }
};
int main()
{
    Area obj;
    obj.Calculate();
    return 0;
}