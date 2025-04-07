// To search the student details by roll no using a member function of a class.
#include<iostream>
using namespace std;
class Student{
public : string StudentName; int Rollno;
float Marks,per;
public: Student(string Name , int Roll,float Mark ){
    StudentName = Name;
   Rollno = Roll;
Marks = Mark;
}
void Display(){
    cout<<"\nName = "<<StudentName<<"\t Marks are ";
    cout<<Marks;
}
char Grade(){
    per=Marks/500*100;
    if(per>=80 && per <=100){
        cout<<"\n Your Grade is A";
        return 'A';
    }
   else if(per>=70 && per <80){
        cout<<"\n Your Grade is B";
        return 'B';
    }
    else if(per>=60 && per <70){
        cout<<"\n Your Grade is C";
        return 'C';
    }
    else if(per>=50 && per <60){
        cout<<"\n Your Grade is D";
        return 'D';
    }else{
    cout<<"\n Not Qualified. ";
    }
}
void Club_Assignment(char grade){
if(grade=='A'){
    cout<<"\n Sports Club";
}
else if(grade=='B'){
    cout<<"\n Eco Club";
}
else if(grade=='C'){
    cout<<"\n NCC Club";
}
else if(grade=='D'){
    cout<<"\n NSS Club";
}
}

int search(){
    int Roll1;
    cout<<"\n Enter your Student Rollno";
    cin>>Roll1;
    return Roll1;
}
public: ~Student(){
    cout<<"\nDestructor Invoked";
}
};
int main(){
    Student obj[5]={{"Ram",101,450},{"Sham",102,480},{"Sita",103,350},{"Gita",104,250},{"Raman",105,300}};
    int i,roll2;char res;
    for(i=0;i<5;i++){
        cout<<"\n Information of Student with Rollnumber "<<obj[i].Rollno;
        obj[i].Display(); 
        // res=obj[i].Grade(); 
        // obj[i].Club_Assignment(res);      
    }  
    roll2=obj[i].search();
    for(i=0;i<5;i++){
        if(roll2==obj[i].Rollno){
            cout<<"\n Student Rollno is valid ";
            cout<<"\n Student Name is "<<obj[i].StudentName;
            cout<<"\n Student Marks are "<<obj[i].Marks;
            res=obj[i].Grade(); 
            obj[i].Club_Assignment(res);  
        }
    }  
    return 0;
}
