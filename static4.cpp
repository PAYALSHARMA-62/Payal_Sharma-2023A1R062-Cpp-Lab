#include<iostream>
using namespace std;
class Usercount{
    static int count;
      public:Usercount()
      {
        count++;
    }
 void Display(){
 cout<<"USers are: "<<count;
 }   
};
int Usercount::count=0;
int main(){
    Usercount obj;
 obj.Display();
}