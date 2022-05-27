/*1. Consider an example of declaring the examination result. Design three classes: Student, Exam, and Result. 
The Student class has data members representing roll number, name. Create the class Exam by inheriting Student class. 
The Exam class adds fields (data members) representing the marks scored in six subjects. Derive the Result from the 
Exam class, and it has its own fields such as total_marks. Write an interactive program to model this relationship.*/
#include<iostream>
using namespace std;
class student{
	public:
		int r_no;
		char name[20];
	public:
		student(){
			cout<<"Name : ";
			cin>>name;
			cout<<"r_no : ";
			cin>>r_no;
		}
};
class exam : public student{
	public:
		int sub1;
		int sub2;
		int sub3;
		int sub4;
		int sub5;
		int sub6;
	public:
		exam(){
			cout<<"Exam Marks\nsub1 sub2 sub3 sub4 sub5 sub6\n";
			cin>>sub1>>sub2>>sub3>>sub4>>sub5>>sub6;
		}
};
class result : public exam{
	public:
		int total_marks;
		float percentage;
	public:
		result(){
			total_marks=sub1+sub2+sub3+sub4+sub5+sub6;
			percentage=(total_marks/(6*30.0))*100.0;
		}
		void display();
};
void result::display(){
	cout<<r_no<<"    "<<name<<"    "<<sub1<<"    "<<sub2<<"    "<<sub3<<"    "<<sub4<<"    "<<sub5<<"    "<<sub6<<"   "<<total_marks<<"    "<<percentage<<endl;
}
int main(){
	result st1;
	st1.display();
	return 0;
}

