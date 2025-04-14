/* create a Employee Management System*/
#include<iostream>
using namespace std;
class Employee{
    private:int EmpID, salary,perks, trips;
    string EmpName, Address, city, behaviour, Emp_behav, dept,project,credits;
    public: Employee(){
    cout<<"\nenter the employee ID";
    cin>>EmpID;
    cout<<"\nenter the employee Name ";
    cin>>EmpName;
    cout<<"\nenter the Address of emp ";
    cin>>Address;
    cout<<"\n";
    
    }
    public: Employee(string emp_dept, string emp_project, int emp_credits){
        // dept=emp_dept;
        // emp_project=project;  //local var ko global assign krre ki bahar dusre fn mein use hojaye
        // credits=emp_credits;
        cout<<"\nbasic info about the employee***\n";
        cout<<"\nthe emp dept is: "<<emp_dept<<"\t"<<"project is: "<<emp_project<<"\t"<<"credits are: "<<emp_credits;
        // cout<<"\nthe emp project is: "<<emp_project;
        // cout<<"\nthe emp_credits are: "<<emp_credits;
        cout<<"\n";
    }
    public: void input_details(){
        cout<<"\nenter more details required for the emp---\n";
        cout<<"\nenter the no of perks: ";
        cin>>perks;
        cout<<"\nenter the no of foreign trips: ";
        cin>>trips;
        cout<<"\nenter the salary of emp: ";
        cin>>salary;
        cout<<"\n";
        
    }
        
    public: void display(){
        // cout<<"\nbasic info about the employee***\n";
        // cout<<"\nthe emp dept is: "<<dept<<"\t"<<"project is: "<<project<<"\t"<<"credits are: "<<credits;
        // cout<<"\n this is the employee details----\n";
    cout<<"\nthe employee ID";
    cout<<EmpID;
    cout<<"\nthe employee Name ";
    cout<<EmpName;
    cout<<"\nthe Address of emp ";
    cout<<Address;
        cout<<"\nthe no of perks: ";
        cout<<perks;
        cout<<"\nthe no of foreign trips: ";
        cout<<trips;
        cout<<"\nthe salary of emp: ";
        cout<<salary;
        cout<<"\n";
        
    }
    public: ~Employee(){
        cout<<"\nall data erased!!!! destructor called\n";
    }

};
int main(){
    Employee obj[2];
    Employee obj1[2]={{"CSE","on IT",5 },{"Physics","on drones",5 }};
    for(int i=0;i<2;i++){
        obj[i].input_details(); //for constr. if arr of obj u are taking of dim= 2 so make a loop of 2 for memb fn.s also....
    }
    for(int i=0;i<2;i++){
        obj[i].display();
    }
    return 0;
}
  
    
