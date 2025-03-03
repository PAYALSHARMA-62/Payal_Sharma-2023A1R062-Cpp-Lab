/*Program to demonstrateworking of function with no return type and no parameter
OOPS features(namespace,access specifier,object,class,member variable and member function)
*/
#include<iostream>
using namespace std;
class Program
{
    public: void Message()
    {
        cout<<"Hi";
    }
};
int main(){
    Program object;
    object.Message();
    return 0;
}