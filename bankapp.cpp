/*Write a program to 
a.create aclass with name BankApp,
b.create a parametrized constructor of this class, that initialize class attributes like,
ProductID, ProductName, ProductPrice.
c. Implement Display function to display all records.
d.Update function to change productPrice.
(Update function will not modify original price of the product)
aditionally
e. create array of object to store product information of 5 different products.
f.Accept productid from user and change price of that product only.
g.display product not exist,if user enetr incorrect productid.*/

#include<iostream>
using namespace std;
class Bankapp{
    public: int proid; string proname;
    int prorice;
    public: Bankapp(int pid,string pname,int price){
        proid=pid;
        proname=pname;
        prorice=price;
    }
    void display(){
        cout<<"details are:"<<proid<<"\t"<<proname<<"\t"<<prorice;
    }
};
void modify(Bankapp obj1){
    obj1.prorice=200;
    cout<<"updated price "<<obj1.prorice;
}
void ipdate(Bankapp obj2){
    obj2.proid=obj2.prorice;
}
int main(){
    Bankapp obj[3]={{1,"chps",80},{2,"puma",56},{3,"lop",96}};
    int i;
    for(int i=0;i<=2;i++){
     obj[i].display();
    modify(obj[i]);
    obj[i].display();
    ipdate(obj[i]);
    obj[i].display();

}
}