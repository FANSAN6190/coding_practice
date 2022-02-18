//1. Write a program to find the number of digits in a given number.
#include<iostream>
using namespace std;
int main(){
    long long int i,n;
    cout<<"Enter the Number = ";
    cin>>n;
    for(i=0;n>0;i++,n/=10);
    cout<<i;
    return 0;
}