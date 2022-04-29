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
#include<iostream>
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
}


