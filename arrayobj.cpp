/*Demonstrate working of Array of object(Method1)*/
using namespace std;
#include<iostream>
class Program
{
    private: int RegNo;float Marks;
    public: Program(int R, float M)
    {
         RegNo=R;
         Marks=M;
          
    }
    public: void Display()
    {
        cout<<"\nRegNumber="<<RegNo<<"\t"<<"Marks="<<Marks;
    }
};
int main()
{
    Program obj[3]={{101,405},{102,430},{103,440}};// Array of object with manual initialization
    int i;
    /* for (i=0;i<3;i++)
    {
    obj.Display();
    }*/
    obj[2].Display();
}