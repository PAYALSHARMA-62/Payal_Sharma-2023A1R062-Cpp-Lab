/* Experiment 7a To implement inheritance for a UG Course class PG Course class and Diploma Course class
Using MultiLevel Inheritance 
Write a Program to 
a. Create a base class with name UG Course Class,
b. Create a function with name SubjectList(), here in this function display a list of Subjects 
and ask user to select a choice from given list.
c. Create a funciton with name MarksObtained(), here in this function ask user to enter marks 
obtained in the selected course.
d. Create a derived class with name PG Course Class,
e. Create a funciton with name SpecializationList(), here in this function display a list of 
subjects and ask user to select a choice from given list.
f. Create a funciton with name MarksObtained(), here in this function ask user to enter marks 
obtained in the selected course.
d. create a derived class with name Result Class,
e. Create a funciton with name SelectionCriteria(), here in this funciton display a Selection 
criteria for the post.
f. Craete a function with name Marksobtained() , here in this function ask user to enter marks 
obtained in the selected course
d. Craete a derived class with name Result Class.
e. Craete a function with name SelectionCriteria(), here in this function display a selection 
criteria
for the post
1. Post1: Software Develoeper :
5 points for percentage more than 80 percent in UG
5 points for percentage more than 80 percent in PG
5 points for percentage more than 80 percent in Diploma 
f. Create a funciton with name FinalResult(), candiates scored more 12 ponits are qualified for this post.
 */

 /* #include<iostream>
 using namespace std;
 class UGCourse{
    public: string sub; int mark; 
    int choice;
    void SubjectList(){
        cout<<"Enter choice ";
        cin>>choice;
        if(choice==1){
        cout<<"\nPhysics";
        }
        else if(choice==2){
            cout<<"\nDigital";
        }
       else if(choice==3){
        cout<<"\nMaths";
       }
       else{
        cout<<"Invalid choice";
       }
    }
    public: int choice1; int marks;
     void Marksobtained(int choice ){
        cout<<"\nEnter marks of Subject selected: ";
        cin>>marks;
        cout<<"\nMarks obtaained in are: "<<marks;
     }
 };
 class PGCourse: public UGCourse{
    public: int choicee;
    void Specialization(){
            cout<<"Enter choice ";
            cin>>choice1;
            if(choicee==1){
            cout<<"\nPhysics";
            }
            else if(choicee==2){
                cout<<"\nDigital";
            }
           else if(choicee==3){
            cout<<"\nMaths";
           }
           else{
            cout<<"Invalid choice1";
           }
        }
        public: int choice2; int marks1;
     void Marksobtained1(int choicee ){
        cout<<"\nEnter marks of Subject selected: ";
        cin>>marks1;
        cout<<"\nMarks obtaained in are: "<<marks1;
     }
    };
 int main(){
    PGCourse obj;
    obj.SubjectList();
    int res;
    obj.Marksobtained(res);
    obj.Specialization();
    int res1;
    obj.Marksobtained1(res1);
    
 }
    */

    #/*include <iostream>
    using namespace std;
    
    // Base Class: UGCourse
    class UGCourse {
    public:
        float ugMarks;
    
        void SubjectList() {
            cout << "UG Subjects: \n1. Computer Science\n2. Math\n3. Physics\nChoose one: ";
            int choice;
            cin >> choice;
            cout << "You selected UG subject number " << choice << endl;
        }
    
        void MarksObtained() {
            cout << "Enter UG Marks: ";
            cin >> ugMarks;
        }
    };
    
    // Derived Class: PGCourse
    class PGCourse : public UGCourse {
    public:
        float pgMarks;
    
        void SpecializationList() {
            cout << "\nPG Specializations: \n1. AI\n2. Data Science\n3. Cyber Security\nChoose one: ";
            int choice;
            cin >> choice;
            cout << "You selected PG subject number " << choice << endl;
        }
    
        void PGMarksObtained() {
            cout << "Enter PG Marks: ";
            cin >> pgMarks;
        }
    };
    
    // Derived Class: DiplomaCourse
    class DiplomaCourse : public PGCourse {
    public:
        float dipMarks;
    
        void CourseList() {
            cout << "\nDiploma Courses: \n1. Web Development\n2. Networking\n3. Graphic Design\nChoose one: ";
            int choice;
            cin >> choice;
            cout << "You selected Diploma course number " << choice << endl;
        }
    
        void DiplomaMarksObtained() {
            cout << "Enter Diploma Marks: ";
            cin >> dipMarks;
        }
    };
    
    // Derived Class: Result
    class Result : public DiplomaCourse {
    public:
        void SelectionCriteria() {
            int score = 0;
    
            if (ugMarks > 80) score += 5;
            if (pgMarks > 80) score += 5;
            if (dipMarks > 80) score += 5;
    
            cout << "\nTotal Score: " << score << " out of 15\n";
    
            if (score > 12) {
                cout << "✅ You are Qualified for the Software Developer Post!\n";
            } else {
                cout << "❌ You are Not Qualified.\n";
            }
        }
    };
    
    // Main Function
    int main() {
        Result candidate;
    
        // UG Course
        candidate.SubjectList();
        candidate.MarksObtained();
    
        // PG Course
        candidate.SpecializationList();
        candidate.PGMarksObtained();
    
        // Diploma Course
        candidate.CourseList();
        candidate.DiplomaMarksObtained();
    
        // Result
        candidate.SelectionCriteria();
    
        return 0;
    }
    */
   #include <iostream>
using namespace std;

// UG Course Class (Base Class)
class UGCourse {
public:
    float ugMarks;

    void SubjectList() {
        cout << "UG Subjects: 1.CS 2.Math 3.Physics\nChoose one: ";
        int choice;
        cin >> choice;
    }

    void MarksObtained() {
        cout <<"Enter UG Marks: ";
        cin >> ugMarks;
    }
};

// PG Course Class (Derived from UGCourse)
class PGCourse : public UGCourse {
public:
    float pgMarks;

    void SpecializationList() {
        cout << "PG Subjects: 1.AI 2.DS 3.Cyber\nChoose one: ";
        int choice;
        cin >> choice;
    }

    void PGMarksObtained() {
        cout << "Enter PG Marks: ";
        cin >> pgMarks;
    }
};

// Diploma Course Class (Derived from PGCourse)
class DiplomaCourse : public PGCourse {
public:
    float dipMarks;

    void CourseList() {
        cout << "Diploma Courses: 1.Web 2.Network 3.Design\nChoose one: ";
        int choice;
        cin >> choice;
    }

    void DiplomaMarksObtained() {
        cout << "Enter Diploma Marks: ";
        cin >> dipMarks;
    }
};

// Result Class (Derived from DiplomaCourse)
class Result : public DiplomaCourse {
public:
    void SelectionCriteria() {
        int score = 0;

        if (ugMarks > 80) {
            score = score + 5;
        }

        if (pgMarks > 80) {
            score = score + 5;
        }

        if (dipMarks > 80) {
            score = score + 5;
        }

        cout << "\nScore: " << score << " out of 15\n";

        if (score > 12) {
            cout << "You are Qualified!\n";
        } else {
            cout << "You are Not Qualified.\n";
        }
    }
};

// Main Function
int main() {
    Result obj;

    obj.SubjectList();
    obj.MarksObtained();

    obj.SpecializationList();
    obj.PGMarksObtained();

    obj.CourseList();
    obj.DiplomaMarksObtained();

    obj.SelectionCriteria();

    return 0;
}
