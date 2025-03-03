#include<iostream>
using namespace std;
class data
{
    private: int res, r;
    public: data() 
    {
        cout<<"Radius is: "<<r;
    }
    public: void cal(int r)
    {
        res=3.14*r*r;
        cout<<"Area is "<<res;
    }
};
int main(){
    data obj;
    obj.cal(5);

}