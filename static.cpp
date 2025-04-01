/* Noraml variable vs Static variable in cpp
#include<iostream>
using namespace std;
class Program{
    public:void fun(){
        int n=0;// normal Variable inside a functio
        n++;
        cout<<"value of n is: "<<n<<endl;
    }
};
int main(){
    Program obj1,obj2,obj3;
    obj1.fun();
    obj2.fun();
    obj3.fun();
}
*/


#include<iostream>
using namespace std;
class Program{
    public:void fun(){
        static int n=0; // static Variable inside a functio
        n++;
        cout<<"value of n is: "<<n<<endl;
    }
};
int main(){
    Program obj1,obj2,obj3;
    obj1.fun();
    obj2.fun();
    obj3.fun();
    return 0;
}