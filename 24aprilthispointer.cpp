/*Program:- This Pointer*/
#include<iostream>
using namespace std;
class A{
    private: int x;
    public: A(int x){
        //this->x=x;
        x=x;
    }
    public: void display(){
        //cout<<"Value of local variable is "<<this->x;
        cout<<"Value of local variable is "<<x;
    }
};
int main(){
    A obj(1);
    obj.display();
}