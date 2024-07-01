//2. Write a program to calculate factorial of a number N using recursion.
#include<iostream>
using namespace std;
int fact(int n);
int main(){
    int n;
    cout<<"Enter the Number = ";
    cin>>n;
    cout<<fact(n);
    return 0;
}
int fact(int n){
    int f=n;
    if(n==1){
        return 1;
    }
    else{
        return (fact(n-1)*f); 
    }
}
