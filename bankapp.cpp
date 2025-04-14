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

/* Write a Program to 
a. create a class with name BankApp,
b. create a parametrized constructor of this class, that initialize class attributes like,
Product ID, Product Name, Product Price.
c.Implement Display function to display all records.
d. Update function to change product Price.
(Update function will not modify original price of the product)
additionally
e. create array of object to store product information of 5 different products.
f. accept product id from user and change price of that product only.
g. display product not exist, if user enter incorrect product id.
5/03/25   */  

#include<iostream>
using namespace std;
class BankApp{
    public: int pid, pp, product_no;
    string pname, product_status;

    public: BankApp(int Product_ID, string Product_Name, int Product_Price){
        // cout<<"\n The Id of the product is "<<Product_ID;
        // cout<<"\n The name of the product is "<<Product_Name;
        // cout<<"\n The Price of the product is"<<Product_Price;
        pid=Product_ID;
        pname=Product_Name;
        pp=Product_Price;
        // if(pid == 101){
        //     cout<<"the price of this roduct will be changed \n";
        //     modify_PID(obj1)
        // }
    }
    // public: void Product(){
    //     cout<<"enter the product information ";
    //     cin>>product_no;
    //     cout<<"enter the product expires or not ";
    //     cin>>product_status;

    // }
    
    public: void display(){
        cout<<"\n The Id of the product is "<<pid;
        cout<<"\n The name of the product is "<<pname;
        cout<<"\n The Price of the product is"<<pp;
    }
       
    };
    void update(BankApp &obj2){ //update function accepts obj2 as Parameter
        obj2.pp=10; //Any Change inside this function will not modify original value of a.
                  //this will create separate instance of Program Class.
                  cout<<"\n Updated value is "<<obj2.pp;
    }
    
int main(){
    int i;
    BankApp obj1[5]={{101,"chips",23000},{102,"chips",45000},{103,"chips",76899},{104,"chips",90000},{105,"chips",45000}};
    
     for(int i=0;i<5;i++){
        obj1[i].display();
        update(obj1[i]);
     }
     int pi;
     
        for(i=0;i<5;i++){
        cout<<"\nenter the pid\n";
        cin>>pi;
        if(obj1[i].pid==pi){
            cout<<"valid pid entered\n";
        update(obj1[i]);
        obj1[i].display();}
        else{
            cout<<"product not exist, user enter incorrect product id\n";
        }}
        return 0;
    }