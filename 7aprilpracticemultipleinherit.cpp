/*Write a program
a. craete a base function class 1 with name Skill Course
b. Create a function with name List1(), display list of courses like
1. C, 2.CPP, 3.Java, 4.C#, user will select a cousrse from the list.
c. craete a base class 2 with name short term Course.
d. craete a function with name List2(), display list of courses like
1. Web Development, 2.DEV OOP, 3.Ethical Hacking, 4.Cyber Security,
user will select a course from a list.
e. Create a base class 3 with name specialization course
f. Craete a function with name Lists3(), display list of Courses like
1. Mobile App Development, 2.IOS Developer, 3.AI/Ml, 4.DAta analytics
*/
/*Write a program  to 
a. create a base class 1 with name Skill Course
b. create a function with name List1(), display list of Courses like 
1. C, 2.Cpp, 3.Java , 4.C#, user will select  a course from this list.
c. create a base class 2 with name Short Term Course 
d. create a function with name List2(), display list of Courses like 
1. Web Development, 2. Dev OOP, 3. etheical Hacking, 4. Cyber Security,
user will select a course from the list.
e. create a base class 3 with name Specialization Course
f. Create a function with name List3(), display list of courses like 
1. Mobile App Development, 2. IOS Developer, 3. AI/ML, 4.Data Analytics, user will select a course from this list
g.create a derived class 1 with name Course_Selection
h. create a function with name select(), store and display list of all courses opted by the user from above three list.*/
#include<iostream>
using namespace std;
class Skill_Course{
    public: string Lt1, Lt2, Lt3;
    public: void List1(){
       cout<<"List of Courses:\n 1. C \n 2. Cpp \n 3. Java\n 4. C#\n";
    }
};
class Short_Term_Course{
    public: void List2(){
        cout<<"list of courses:\n 1. Web Development\n 2. Dev OOP\n 3. etheical Hacking\n 4. Cyber Security\n";
    }
};
class Specialization_Course{
    public: void List3(){
        cout<<"list of courses:\n 1. Mobile App Development\n 2. IOS Developer\n 3. AI/ML\n 4.Data Analytics\n";
    }
};
class Course_Selection: public Skill_Course, public Short_Term_Course,public Specialization_Course{
    public: void Select(){
     cout<<"\nEnter the name of the courses, user taking from the three lists: ";
    getline(cin,Lt1);
    //cin>>Lt1;
    //  cin>>Lt2;
    //  cin>>Lt3;
    getline(cin,Lt2);
    getline(cin,Lt3);
     cout<<"\nThe list of all courses opted by the user from above three lists: ";
     cout<<"\nCourse opted from List1 is "<<Lt1;
     cout<<"\nCourse opted from List2 is "<<Lt2;
     cout<<"\nCourse opted from List3 is "<<Lt3;
    }
};
int main(){
    Course_Selection obj;
    obj.List1();
    obj.List2();
    obj.List3();
    obj.Select();
    return 0;
}