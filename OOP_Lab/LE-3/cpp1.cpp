//Write C++ Program to swap two variable using reference variables.
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    cout<<"a="<<a<<" b="<<b<<endl;
    int &p1=a;
    int &p2=b;
    int t=p1;
    p1=p2;
    p2=t;
    cout<<"New a="<<a<<" b="<<b<<endl;
    return 0;
}