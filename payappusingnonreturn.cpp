#include<iostream>
using namespace std;
class PayApp{
    private: float amount,dis,bill;
    public: void accept(){
        cout<<"enter amount: \n";
        cin>>amount;
        
    }
    public: void validate(){
        if(amount>0){
            cout<<amount;
            discount();
            display();        //class ke andar fn declaration is without obj
        }
        else{
            cout<<"error in amount";
        }

    }
    public: void discount(){
        dis=amount/100*10;
        cout<<"\n this is the 10% dis on amount:\n";
        cout<<dis;

    }
    public: void display(){
        bill=amount-dis;
        cout<<"\n this is your final bill: \n";
        cout<<bill;
    }
};
int main(){
    PayApp obj;
    obj.accept();           //class ke bahar ****[main mein]**** fn declaration is with obj
    obj.validate();
    return 0;
}