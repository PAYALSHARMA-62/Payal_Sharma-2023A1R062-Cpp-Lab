
//To update the details of a student using a member function of student class. 
#include<iostream>
using namespace std;
class Student{
public : string StudentName; int StudentId;
float Marks,per;
public: Student(string Name , int Id,float Mark ){
    StudentName = Name;
    StudentId = Id;
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
public : void Update(){
cout<<"Enter updated marks";
cin>>Marks;
cout<<"Student Records After Updation";
Display();
}
/*public: ~Student(){
    cout<<"Destructor Invoked";
}*/
};
int main(){
    Student obj[5]={{"Ram",101,450},{"Sham",102,480},{"Sita",103,350},{"Gita",104,250},{"Raman",105,300}};
    int i;char res;int SID;
    for(i=0;i<5;i++){
        cout<<"\n Information of Student with id "<<obj[i].StudentId;
        obj[i].Display(); 
        res=obj[i].Grade(); 
        obj[i].Club_Assignment(res);      
    }    
    cout<<"\n Enter your Student ID to update Your Information";
    cin>>SID;
    for(i=0;i<5;i++){
        if(obj[i].StudentId == SID){
            cout<<"\n You have entered valid Student Id";
            obj[i].Update();
        }
    }
    return 0;
}
