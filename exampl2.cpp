/* write a program to create a  class with name student_Data with function name,
Welcome_Message(), this function on execution will display a meassage
Welcome to MIET Jammu
Now, we will add 1 more function with name Validate_RegNo(),this function will accept student
name and registeration number from student and validate it.
(valid RegNo's are from 61 to 120)
*/
#include<iostream>
using namespace std;
class student_Data
{
 public:void Welcome_Message()// function with no return type and no parameter
{
cout<<"Welcome to MIET Jammu";
}
private: string Name;
int RegNo;
public: string Validate_RegNo()
{
    cout<<"Enter student name ";
    cin>>Name;
    cout<<"Enter registration number ";
    cin>>RegNo;
    if(RegNo>=61 && RegNo<=120)
    {
        return "True";
    }
    else{
        return "False";
    }
}
};
int main()
{
    student_Data obj;// object creation
    obj.Welcome_Message();// calling function
    string res;
    res=obj.Validate_RegNo();
    if(res=="True")
    {
        cout<<"Login successful!";
    }
    else{
        cout<<"Login fail!";
    }
    return 0;
}
