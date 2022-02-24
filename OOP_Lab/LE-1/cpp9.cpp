//1. Given an array A of size N-1 and given that there are numbers from 1 to N with one element missing; 
//   Write program to find the missing number.
//   Test case 1: Given array: 1 2 3 5; missing element is 4.
//   Test case 2: Given array: 1 2 3 4 5 6 7 8 10; missing element is 9.
#include<iostream>
using namespace std;
int main(){
    int n,m=0;
    cout<<"Enter the Size = ";
    cin>>n;
    int A[n-1];
    for(int i=0;i<n-1;i++){
        cout<<"Enter the Values = ";
        cin>>A[i];
        if(((A[i])-A[i-1])!=1){
            m=(A[i]-1);
        }
    }
    cout<<"Given Array is => ";
    for(int i=0;i<n-1;i++){
        cout<<A[i]<<" ";
    }
    
    cout<<endl<<"Missing number is "<<m;
    return 0;
}