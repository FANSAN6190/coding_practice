/*input
10 20 25
23 24 22
23 23 21
10 20 25
29 28 27
23 23 21
10 20 25
23 24 22
23 23 21
21 21 26
*/
/*    1. The annual examination results of 10 students are tabulated as follows:
__________________________________________________________________________
Roll No. 		Subject 1 		Subject 2 		Subject 3
	.			.			.			.
	.			.			.			.
	.			.			.			.
Write a program to read the data and determine the following:
a) Total marks obtained by each student.
b) The highest marks in each subject and the Roll No. of the students who secured it.
c) The student who obtained the highest total marks.*/
#include<iostream>
using namespace std;
class aexam{
    public:
        int r_no;
        int sub1;
        int sub2;
        int sub3;
        int total;
};
int main(){
    int max1=0,max2=0,max3=0,maxt=0;
    aexam std[10];
    for(int i=0;i<10;i++){
        std[i].r_no=i+1;
        cin>>std[i].sub1;
        cin>>std[i].sub2;
        cin>>std[i].sub3;
        std[i].total=std[i].sub1+std[i].sub2+std[i].sub3;
        if(std[i].sub1>max1){max1=std[i].sub1;}
        if(std[i].sub2>max2){max2=std[i].sub2;}
        if(std[i].sub3>max3){max3=std[i].sub3;}
        if(std[i].total>maxt){maxt=std[i].total;}
        
    }
    for (int i=0;i<10;i++)
    {
        cout<<std[i].r_no<<" - ";
        cout<<std[i].sub1<<" ";
        cout<<std[i].sub2<<" ";
        cout<<std[i].sub3<<" "; 
        cout<<std[i].total<<"\n";
    }
    int s1[10],s2[10],s3[10];
    for(int i=0;i<10;i++){
        if(std[i].sub1==max1){
            s1[i]=std[i].r_no;
            i++;
        }
    }
    cout<<max1<<" "<<max2<<" "<<max3<<" "<<maxt<<endl;
    return 0;
    
}
