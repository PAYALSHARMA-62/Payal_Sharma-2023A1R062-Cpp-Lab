/* program to demonstrate working of constructor
Constructor with  parameter values*/
#include<iostream>
using namespace std;
class program // class with name program
{
    public: program(string Name,int MobNo) // class Constructor
    {
        cout<<"Name is "<<Name; // 
        
        cout<<" Mobile Number "<<MobNo;
    }
};
int main()
{
    program obj("Abc",23232322); // class object
    // string Nm; /* yh 4 h memory alg lata h   user sa value accept krna 
    // aur unn paramters ko pass krna*/
    // int Mob;
    // cout<<"Enter Nm";
    // cin>>Nm;
    // cout<<"Enter Mobile no ";
    // cin>>Mob;
    // program obj(Nm,Mob);

    return 0;
}