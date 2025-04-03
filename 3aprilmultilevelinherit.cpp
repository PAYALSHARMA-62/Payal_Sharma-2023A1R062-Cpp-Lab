// 2. Multi level Inheritance 

//Pattern
#include<iostream>
using namespace std;
class Parent {
  public: void Fun1(){
  cout<<"Parent class called!";
  }
};
class child: public Parent{
public: void Fun2(){
cout<<"\nChild class called";
}
};
class Grandchild: public child{
public: void Fun3(){
cout<<"\nGrand child called!";
}
};
int main(){
Grandchild obj;
obj.Fun1();
obj.Fun2();
obj.Fun3();
}

/*Write a Program
a. create a base class with name MyApp
b. create a function Message(), display welcome message on screen
c. Create a function Login() accept pin from user and validate pin against value 123
and return Message 'Yes' or 'No'
d. Create a derived class with name StudentInfo
e. create a function Accept() store student information like name,Registration 
number, course name but only when user Login Successfully.
f. Create a function Display() to display student details.*/

// agr hum grand chilld clas ki jga parent class aur child class ka object create kr da toh
// error nhi aata but logically incorrect hai.