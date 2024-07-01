/*1. The annual examination results of 10 students are tabulated as follows:
__________________________________________________________________________
Roll No. 		Subject 1 		Subject 2 		Subject 3
	.			.			.			.
	.			.			.			.
	.			.			.			.
Write a program to read the data and determine the following:
a) Total marks obtained by each student.
b) The highest marks in each subject and the Roll No. of the students who secured it.
c) The student who obtained the highest total marks.
13 13 16
21 25 27
15 16 18
13 13 16
21 25 27
15 16 18
13 13 16
21 25 27
15 16 18
13 13 16
*/
/*#include<iostream>
using namespace std;
int m1=0,m2=0,m3=0,mt=0;
class aexam{
	public:
		int r_no;
		int sub1;
		int sub2;
		int sub3;
		int total;
}st[10];
int s1m(int i){
	if(st[i].sub1==m1){
		return st[i].r_no;
	}
	return 0;
}
int s2m(int i){
	if(st[i].sub2==m2){
		return st[i].r_no;
	}
	return 0;
}
int s3m(int i){
	if(st[i].sub1==m3){
		return st[i].r_no;
	}
	return 0;
}
int stm(int i){
	if(st[i].sub1==mt){
		return st[i].r_no;
	}
	return 0;
}
int main(){
	for(int i=0;i<10;i++){
		st[i].r_no=i+1;
		cin>>st[i].sub1;
		cin>>st[i].sub2;
		cin>>st[i].sub3;
		st[i].total=st[i].sub1+st[i].sub2+st[i].sub3;
		if(st[i].sub1>m1){m1=st[i].sub1;}
		if(st[i].sub2>m2){m2=st[i].sub2;}
		if(st[i].sub3>m3){m3=st[i].sub3;}
		if(st[i].total>mt){mt=st[i].total;}
	}
	
	cout<<"Highest Marks in Subject1-\n";
	for(int i=0;i<10;i++){
		if(s1m!=0){cout<<st[s1m(i)-1].sub1<<" "<<s1m(i)<<endl;}
	}
	cout<<"\nHighest Marks in Subject2-\n";
	for(int i=0;i<10;i++){
		if(s2m!=0){cout<<st[s2m(i)-1].sub2<<" "<<s2m(i)<<endl;}
	}
	cout<<"\nHighest Marks in Subject3-\n";
	for(int i=0;i<10;i++){
		if(s3m!=0){cout<<st[s3m(i)-1].sub3<<" "<<s3m(i)<<endl;}
	}
	cout<<"Highest Total Marks-\n";
	for(int i=0;i<10;i++){
		if(stm!=0){cout<<st[stm(i)-1].total<<" "<<stm(i)<<endl;}
	}
	return 0;
}*/


#include <iostream>
#include<climits>
using namespace std;
class Student
{
        char e_no[10];
        int sub1,sub2,sub3;
    public:
        void get();
        void print();
        int total();
        int getSub1();
};
void Student::get()
{
    cin.ignore();
    cout<<"Enter enrollment number:";
    cin.getline(e_no,10);
    cout<<"Enter marks for subject1, subject2, subject3:";
    cin>>sub1>>sub2>>sub3;
}
void Student::print()
{  
    cout<<"Enrollment number:";
    cout<<e_no;
    cout<<"Marks for subject1, subject2, subject3:";
    cout<<sub1<<" "<<sub2<<" "<<sub3<<endl;
}
int Student::total()
{
    return sub1+sub2+sub3;
}
int Student::getSub1()
{
    return sub1;
}
int main()
{
    int i,n,max_total=INT_MIN,student=0,tot=0,max_sub1=INT_MIN,current_sub1=0;
    cout<<"Enter total number of students in class:";
    cin>>n;
    Student s[n];
    for(i=0;i<n;i++)
        s[i].get();
    for(i=0;i<n;i++)
        s[i].print();
    for(i=0;i<n;i++)
    {
        cout<<"Total for student "<<i+1<<" is :";
        tot = s[i].total();
        cout<<tot<<endl;
        if(tot>max_total)
        {
            max_total=tot;
            student = i+1;
        }
    }
    cout<<"The student with highest total marks is:"<<student<<" and marks is:"<<max_total<<endl;
    student = 0;
    for(i=0;i<2;i++)
    {
        current_sub1 = s[i].getSub1();
        if(current_sub1>max_sub1)
        {
            max_sub1=current_sub1;
            student = i+1;
        }
    }
    cout<<"The student with highest marks in subject 1 is:"<<student<<" and marks is:"<<max_sub1<<endl;
}

/*Enter total number of students in class:3
Enter enrollment number:21130
Enter marks for subject1, subject2, subject3:24 26 30
Enter enrollment number:23444
Enter marks for subject1, subject2, subject3:21 32 29
Enter enrollment number:21143 
Enter marks for subject1, subject2, subject3:25 28 26
Enrollment number:21130Marks for subject1, subject2, subject3:24 26 30
Enrollment number:23444Marks for subject1, subject2, subject3:21 32 29
Enrollment number:21143Marks for subject1, subject2, subject3:25 28 26
Total for student 1 is :80
Total for student 2 is :82
Total for student 3 is :79
The student with highest total marks is:2 and marks is:82
The student with highest marks in subject 1 is:1 and marks is:24*/