/*Create a class Book with data member book name and price
Create an object dynamically and display its data and deallocates its memory.*/
#include<iostream>
using namespace std;
class Book{
    public: string Bname; int Price;
    public: void Display(){
        cout<<"\nName= "<<Bname;
        cout<<"\nPrice are "<<Price;
    }
};
int main()
    {
        Book *obj= new Book();
        obj->Price=550;
        obj->Bname="Morris Mano"; 
        obj->Display();
        delete obj;
        obj->Display();
    }
