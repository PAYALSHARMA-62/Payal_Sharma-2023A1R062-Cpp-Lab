/* Write a program to store 10 rollno of weak learners of your class and 10 rollno of Advance learner of your class, according to you.
Store rollno's in two different array and display the record.*/

// #include<iostream>
// using namespace std;
// class rollno{
//     private: int weaklearner[10]={61,62,63,64,65,66,67,68,69,70};
//     int advancelearners[10]={71,72,73,74,75,76,77,78,11,12};
//     public: void display()
//     {
//         cout<<"the weak learners are: \n";
//         cout<<"\n"<<weaklearner[0];
//         cout<<"\n"<<weaklearner[1];
//         cout<<"\n"<<weaklearner[2];
//         cout<<"\n"<<weaklearner[3];
//         cout<<"\n"<<weaklearner[9];

//         cout<<"\nthe advance learners are: ";
//         cout<<"\n"<<advancelearners[0];
//         cout<<"\n"<<advancelearners[1];
//         cout<<"\n"<<advancelearners[2];
//         cout<<"\n"<<advancelearners[3];
//         cout<<"\n"<<advancelearners[4];
    
//     }
// };
// int main(){
//     rollno obj;
//     obj.display();
//     return 0;
// }

//to display all elements, u can use a for loop....

#include<iostream>
using namespace std;
class Program{
    private: int weak[10] = {1,3,4,5,6,7,8,9,11,33};
    int adv[10]={12,13,14,15,16,17,18,19,20,21};
    
    public: void Record(){
        int i;
        cout<<"\n List of Advance Learners ";
        for (i=0;i<10;i++){
            cout<<adv[i]<<"\t";
        }
  
        cout<<"\n List of Weak Learners ";
        for(i=0;i<10;i++){
            cout<<weak[i]<<"\t";
        }
    }
    
};
int main(){
    Program obj;
    obj.Record();
    return 0;
}