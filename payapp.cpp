// #include<iostream>
// using namespace std;
// class PayApp{
//     int amount,dis;
// public: void accept(){
//     //int amount;
//     cout<<"enter amount";
//     cin>>amount;
// }
// public: void validate(){
//     if(amount>0){
//         cout<<"valid\n";
//     discount();
//     display();
        
//     }
//     else{
//      cout<<"nothing\n";
//     }
// }
// public: void discount(){
//     int bill;
//     dis= amount/100*10;
//     cout<<"this is your discount\n"<<dis;

    
// }
// public: void display(){
//     int res;
// cout<<"\nThis is your final bill\n";
// res=amount-dis;
// cout<<res;
// }
// };
// int main(){
//     PayApp obj;
//     obj.accept();
//     obj.validate();
//     // int val;
//     // val = obj.validate();
//     // if(val==1){
//     //     cout<<"\nvalidation successful\n";
//     //     //obj.discount();
//     // //obj.display();              //agar main mein function declare krein too with obj. krna agr pehle hi too nhi
//     // }
//     // else{
//     //     cout<<"not success";
//     // }
    
//     return 0;
// }


#include<iostream>
using namespace std;
class PayApp{
    private: float amount,dis,bill;
public: void accept(){
    //int amount;
    cout<<"enter amount:\n";
    cin>>amount;
}
public: int validate(){
    if(amount>0){
        cout<<"valid amount entered!!"<<"\n WELOCME!!\n";
       return 1;
        
    }
    else{
     cout<<"Invalid amount entered\n";
     return 0;
    }
}
public: void discount(){
    dis= amount/100*10;
    cout<<"This is your discount: \n"<<dis;

    
}
public: void display(){
cout<<"\nThis is your final bill: \n";
bill=amount-dis;
cout<<bill;
}
};
int main(){
    PayApp obj;
    obj.accept();
 
    int val;
    val = obj.validate();
    if(val==1){
        // cout<<"\nvalidation successful\n";
        obj.discount();
    obj.display();              //agar main mein function declare krein too with obj. krna agr pehle hi too nhi
    }
    else{
        cout<<"not success due to invalid amount you entered!!!!\n";
    }
    
    return 0;
}