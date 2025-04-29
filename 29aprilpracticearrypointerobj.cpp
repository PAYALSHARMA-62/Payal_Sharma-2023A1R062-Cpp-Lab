/*29/04/25
Q: Uisng Array of Pointer, store information of Books like BookID and Price from user.
Accept from user at runtime, how many Books Records he/she wants to store.
also calculate total cost of books at the end of the program.*/
#include<iostream>
using namespace std;
class Book{
    public: int BookID, price;
    public: void Accept(int ID, int p){
        BookID=ID;
        price=p;
    }
    void display(){
        cout<<"\nBook ID is "<<BookID;
        cout<<"\tPrice of the book is "<<price;
    }
};
int main(){
    int n,i;
    int I, PR;
    int cost=0;
    cout<<"\nenter the no of book records the user want to store ";
    cin>>n;
    Book *obj[n];
    for(i=0;i<n;i++){
    obj[i]=new Book();
    cout<<"\nenter the BOOKID and Price of the Book ";
    cin>>I>>PR;
    obj[i]->Accept(I,PR);
    }

    cout<<"displaying the book inforamtion ";
    for(i=0;i<n;i++){
        obj[i]->display();
    }
    cout<<"\n now, calculating the total cost of books";
    for(i = 0; i < n; i++){
        //cost += obj[i]->price;
        cost = cost + obj[i]->price;
    }
    cout<<"\nThe total cost of books= " << cost;
    
    for(i=0;i<n;i++){
        delete obj[i]; //Deallocating Memory of Array of Pointers
        obj[i]->display();
    }
    return 0;
}