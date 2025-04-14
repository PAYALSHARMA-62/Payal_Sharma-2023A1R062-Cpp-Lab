#include<iostream>
using namespace std;
// using is a keyword
// namespace:- collection of predefine classes.
// std: name of the predefine namespace

//class is a keyword(predefine word already defined in library) used to define a class
// program is a user define name.
// for user define name, we use some naming conventions


class Program//4 
{
    //block all statements are enclosed inside the bracket
    // public: //access specifier
    public : void display()//function definition //6//
    {//7//
        cout<<"Hello"; //8// //cout is used to display message on screen but the message must be enclosed in double quotes " "
        // ; is terminator or end of statement // class ke baad semicolon
    } //9//
}; //10//
int main() // 1 //main is first execution of a program for compiler
{//2
Program obj; //3// syntax of object is : classname  objectname
obj.display(); //5 // function calling syntax 
//object name . Access Mehod / function name(); // here dot is the access method to retrieve the name 
return 0; // 11//
} //12// // caalling ko definition ke saath link krna is known as binding