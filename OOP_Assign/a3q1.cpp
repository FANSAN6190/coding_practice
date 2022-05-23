/*Question 1 Write a C++ program to perform the following tasks:

    (i) Create ‘Student’ class, with two data members: name and Branch_Number ;  Branch_Number 
    is an integer and name is a string. The value of Branch_Number is 1 for CSE student and 2 for 
    ECE student.

    (ii) Derive two classes ‘CSE’ and ‘ECE’. There are three subjects in each branch. Marks obtained 
    in each subject is considered as data members. In other word, for the class CSE, the data members 
    are CSE_sub1_marks, CSE_sub2_marks and CSE_sub3_marks. Similarly, for class ECE, the data members 
    are ECE_sub1_marks, ECE_sub2_marks and ECE_sub3_marks.


    (iii) Input appropriate data from the keyboard for 2 CSE and 3 ECE Students. Write necessary 
    function to get data.

    (iv) Display Branch_Number, name, marks for CSE students first and then for ECE students.*/
#include<iostream>
using namespace std;
class student{
    protected:
        string name;
        int branch_number;
};
class cse:public student{
    protected:
        int cse_sub1_marks;
        int cse_sub2_marks;
        int cse_sub3_marks;
    public:
        void getdata(){
            cin>>branch_number;
            getline(cin,name);
            cin>>cse_sub1_marks>>cse_sub2_marks>>cse_sub3_marks;
        }
        void putdata(){
            cout<<"branch : "<<branch_number<<"    Name : "<<name<<endl;
            cout<<"Marks-\n"<<"sub-1 : "<<cse_sub1_marks<<"\n"<<"sub-2 : "<<cse_sub2_marks<<"\n"<<"sub-3 : "<<cse_sub3_marks<<endl;
        }

};
class ece:public student{
    protected:
        int ece_sub1_marks;
        int ece_sub2_marks;
        int ece_sub3_marks;
    public:
        void getdata(){
            cin>>branch_number;
            getline(cin,name);
            cin>>ece_sub1_marks>>ece_sub2_marks>>ece_sub3_marks;
        }
        void putdata(){
            cout<<"branch : "<<branch_number<<"    Name : "<<name<<endl;
            cout<<"Marks-\n"<<"sub-1 : "<<ece_sub1_marks<<"\n"<<"sub-2 : "<<ece_sub2_marks<<"\n"<<"sub-3 : "<<ece_sub3_marks<<endl;
        }
};
int main(){
    int c,e;
    cout<<"enter the number of cse students=";
    cin>>c;
    cse cob[c];
    for(int i=0;i<c;i++){
        cob[i].getdata();
    }

    cout<<"enter the number of ece students=";
    cin>>e;
    ece eob[e];
    for(int i=0;i<e;i++){
        eob[i].getdata();
    }

    for(int i=0;i<c;i++){
        cob[i].putdata();
    }
    for(int i=0;i<e;i++){
        eob[i].putdata();
    }    
}