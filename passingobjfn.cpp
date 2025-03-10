//Method 1(Pass by value): Passing object as parameter to function
#include<iostream>
using namespace std;
class Result{
    public:string Name;int RollNo;float Marks;int Credits; // local variable
    public: Result(string Name1,int RollNo1,float Marks1,int Credits1){
        Name=Name1;
        RollNo=RollNo1;
        Marks=Marks1;
        Credits=Credits1;
    }
    public: void display()
    {
        cout<<"\nName: "<<Name<<"\t"<<"RollNo: "<<RollNo<<"\t"<<"Marks: "<<Marks<<"\n"<<"Credits: "<<Credits;
    }
} ;
void Semester1(Result sem1){ // yha hum create kr rha h
sem1.Marks=400;
//sem1.Credits=sem1.Marks/10;
cout<<"\nMarks of sem1: "<<sem1.Marks;
//cout<<"\nCredits of sem1: "<<sem1.Credits;

}
void Semester2(Result sem2){
    sem2.Marks=350;
    //sem2.Credits=sem2.Marks/10;
    cout<<"\nMarks of sem2: "<<sem2.Marks;
    //cout<<"\nCredits of sem2: "<<sem2.Credits;
        }
    void Semester3(Result sem3){
        sem3.Marks=450;
        //sem3.Credits=sem3.Marks/10;
        cout<<"\nMarks of sem3: "<<sem3.Marks;
        //cout<<"\nCredits of sem3: "<<sem3.Credits;
        }
        void crd1(Result &sem1){
            sem1.Credits=5;
            cout<<"\nCredits: "<<sem1.Credits;
        }
        int main(){
            Result obj("Abc",1,10,0);
            obj.display();
            Semester1(obj);
            Semester2(obj);
            Semester3(obj);
            return 0;
        }