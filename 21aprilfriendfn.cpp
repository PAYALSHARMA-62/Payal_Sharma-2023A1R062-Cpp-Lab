/*Program:- Friend Function
In Banking application where internal data like Account Number, Balance, Amount Holder
Name is required by Audit Function()?
Here wew declare Audit Function() in Bank clas as friend function to access its
private data outside the class */
#include<iostream>
using namespace std;
class BankApp{
    private: int Account_No;
    string ACC_Holder_Name; float Balance; //private meber of class
    public: BankApp(int Number, string Name, float Bal){ // Paraamterized constructor
        Account_No=Number;
        ACC_Holder_Name=Name;
        Balance=Bal;
    }
    public: void show(){
        cout<<"\n Account Holder Name is "<<ACC_Holder_Name;
        cout<<"\nAccount Number is "<<Account_No;
        cout<<"\n Account Balance is "<<Balance;
    }
    friend void Audit(BankApp &obj); //Friend function declaration inside class
                                    // Refrence aur pointer ka liya bass & aur * lagana h
};
void Audit(BankApp &obj){
    cout<<"\n Audit function";
    cout<<"\n Account balance of Account Number "<<obj.Account_No<<"\t"<<obj.Balance;

}
int main(){
    BankApp obj[4]={{101,"Payal",10000},{102,"Mahi",20000},{103,"Sita",30000},{104,"Zeinab",40000}};
    for(int i=0;i<4;i++){
        obj[i].show();
    Audit(obj[i]);
    }
    return 0;
    //BankApp obj(101,"PAyal",10000);
    // BAnkApp obj2(103,"Mahi",80000);
    //obj.show();
    //obj2.show();
    //Audit(obj2);
}