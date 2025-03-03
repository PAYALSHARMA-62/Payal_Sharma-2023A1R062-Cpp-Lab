/*Demonstarte write a program to store 10 rollno of weak learners of your class and 10 rollno
ofadvance learners in your class, according to you.
Store rollno's in two different array and display the record*/
#include<iostream>
using namespace std;
 class details{
 private: int weaklern[10]={1,4,6,7,8,90,23,56,65,7};
 private: int advancelearn[10]={78,90,89,23,54,12,5,59,13,62};
 public: void Display()
 {
    // cout<<"\nEnter Array value at index 5: "<<weaklern[5];
    // cout<<"\nEnter Array value at index 9: "<<weaklern[9];
    // cout<<"\nEnter Array value at index 9: "<<advancelearn[9];
    // cout<<"\nEnter Array value at index 2: "<<advancelearn[2];
    int i;
    for(i=0;i<10;i++){
        cout<<"Weak Learners are: ";
        cout<<weaklern[i]<<"\t";
    }
    cout<<"Advanced Learners are: ";
    for(i=0;i<10;i++){
      cout <<advancelearn[i]<<"\t";
    }
 }
};
int main()
{
    details obj;
    obj.Display();
}