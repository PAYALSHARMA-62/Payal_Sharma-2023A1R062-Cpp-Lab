/*29/04/25
Program: Array of Pointer to Object
Stores Student Information at Runtime
*/
#include<iostream>
using namespace std;
class Student{
    public: int Regno; string Name;
    public: void Accept(int Number, string name){
        Regno=Number;
        Name=name;
    }
    void display(){
        cout<<"\nName is "<<Name;
        cout<<"\tRegistration Number is "<<Regno;
    }
};
int main()
{
    int n,i;
    cout<<"Enter how many student records you want to store ";
    cin>>n;
    int R; string N;
    Student *obj[n]; //Array of Pointer To Object : n is dimension here if it is known so enter the no directly but for run time take var
    for(i=0;i<n;i++){
        obj[i] =  new Student();//Allocating Memory at Runtime
        cout<<"\nEnter Student Registration Number and Name ";
        cin>>R>>N;
        obj[i]->Accept(R,N); //Passing value to Accept Function using Array Index

}
cout<<"\nDisplaying Student Information \n";
for(i=0;i<n;i++){
    obj[i]->display(); //Calling Display Function using Array of Pointer
    //here each pointer of array, pointing towards different student record
}
for(i=0;i<n;i++){
    delete obj[i]; //Deallocating Memory of Array of Pointers
    obj[i]->display();
}
return 0;
}
   