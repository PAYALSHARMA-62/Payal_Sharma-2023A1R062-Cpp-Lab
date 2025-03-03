/*Demonstrate the concept of function overloading.
create a class with name shapes, create a function with name area(),
with area function calculate Area of circle, Area of Rectangle, Area of triangle,
using function overloading*/
#include<iostream>
using namespace std;
class Shapes
{
    private:int res;
    public: void Area(int radius) // function1
    {
     res=3.14*radius*radius;
        cout<<"\nArea of circle is: "<<res;
    }
    public: void Area(float l,float b)
    {
        res= 0.5*l*b;
        cout<<"\nArea of triangle: "<<res;
    }
    private: float l1, b;
    public: void Area()
    {
    cout<<"\nEnter the length and breadth ";
    cin>>l1>>b;
    res=l1*b;
        cout<<"\nArea of rectangle is: "<<res;
    }
};
int main()
{
  Shapes obj;
   //obj.Area(4);
    int radius,res;
    cout<<"\nEnter radius: ";
    cin>>radius;
   res=3.14*radius*radius;
   cout<<"REA "<<res;
   obj.Area(4,7);
   obj.Area();
}