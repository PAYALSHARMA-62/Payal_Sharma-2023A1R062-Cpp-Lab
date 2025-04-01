/*write a program to create a class with name Usercount and a function count(),
this function will count total number of users of class
Imp pt: static variable can declare inside the class
but can be initilaize outside the class
#include<iostream>
using namespace std;
class UserCount{
    public: void Count(){
    static int cnt=0;
    cnt++;
    cout<<"no of users of calss: "<<cnt<<endl;
    }
};
int main(){
    UserCount obj1,obj2,obj3;
    obj1.Count();
    obj2.Count();
    obj3.Count();
}*/

#include<iostream>
using namespace std;
int UserCount::cnt=0;
class UserCount{
     static int cnt;
    public:  UserCount(){
    cnt++;
    cout<<"no of users of calss: "<<cnt<<endl;
    }
    void display(){
        cout<<"total no of user: "<<cnt;
    }
};
//int UserCount::cnt=0;
int main(){
    UserCount obj1,obj2,obj3;
    obj3.display();
}