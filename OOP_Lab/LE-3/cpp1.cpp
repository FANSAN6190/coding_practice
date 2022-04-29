//1. Write C++ Program to swap two variable using reference variables.
#include<iostream>
using namespace std;
int main(){
    int a,b;
    int *p1,*p2;
    cin>>a>>b;
    cout<<"a="<<a<<" b="<<b<<endl;
    p1=&a;
    p2=&b;
    int t=*p1;
    *p1=*p2;
    *p2=t;
    cout<<"New a="<<a<<" b="<<b<<endl;
    return 0;
}