//1. Given an array A of size N-1 and given that there are numbers from 1 to N with one element missing; 
//   Write program to find the missing number.
//   Test case 1: Given array: 1 2 3 5; missing element is 4.
//   Test case 2: Given array: 1 2 3 4 5 6 7 8 10; missing element is 9.
#include<iostream>
using namespace std;
int main(){
    int N,m=0;
    cout<<"Enter the Number of elements = ";
    cin>>N;
    char A[N-1];
    cout<<"Enter the Values :"<<endl;
    A[0]=0;
    for(int i=1;i<N-1;i++){
        cin>>A[i];
    }
    for(int i=1;i<N-1;i++){
        if(A[i]!=(A[i-1]+1)){
            cout<<"_M_";
            cout<<A[i];
            m=A[i]+1;
        }
        else{
            cout<<A[i];
        }
    }
    cout<<endl<<m;
}