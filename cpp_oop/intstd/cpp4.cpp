#include<iostream>
using namespace std;
void calc(int &x,int &y){
    cout<<"Addition = "<<x+y<<endl;
    cout<<"Subtration = "<<x-y<<endl;
    cout<<"Multiplication = "<<x*y<<endl;
    cout<<"Division = "<<x/y<<endl;
}
int main()
{
    int a,b;
    cout<<"Enter the First Number = ";
    cin>>a;
    cout<<"Enter the Second Number = ";
    cin>>b;
    calc(a,b);
}