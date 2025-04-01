/*Normal class object vs static object*/
/* #include<iostream>
using namespace std;
class Program{
    public: Program(){ //default constructor of class
        cout<<"Constructor called!";
    }
    ~Program(){
        cout<<"\nDestructor called!"; //destructor called
    }
    void Display(){
        cout<<"\nDisplay function called!"; //member function of class
    }
};
void Fun(){ //Function with class object
    Program obj1;
    obj1.Display(); //Member function called inside this function
}
int main(){
    Fun(); //Function with class object called
    cout<<"\nRecalling fun function!\n"; 
    Fun(); //Function with class object called
    return 0;
}


iska ouput mai constructor aur destructor brr brr call hoga but static ka case mia ek hi brr constructor
banaya noral has more lifetime*/

//static object
#include<iostream>
using namespace std;
class Program{
    public: Program(){ //default constructor of class
        cout<<"Constructor called!";
    }
    ~Program(){
        cout<<"\nDestructor called!"; //destructor called
    }
    void Display(){
        cout<<"\nDisplay function called!"; //member function of class
    }
};
void Fun(){ //Function with class object
    static Program obj1; // created class object as static
    obj1.Display(); //Member function called inside this function
}
int main(){
    Fun(); //Function with class object called
    cout<<"\nRecalling fun function!\n"; 
    Fun(); //Function with class object called
    return 0;
}
