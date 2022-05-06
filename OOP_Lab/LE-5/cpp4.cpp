/*Write a program to show that constructors follow the property of function overloading as well as 
default parameter. Also, show that in case of constructor also, default parameter may create problem in 
implementing function overloading.*/

#include<iostream>
using namespace std;
class A{
    int a,b;
    public:
        A():a(0){}
        A(int x, int y=3):a(x),b(y){}
        void dis(){
            cout<<a<<" "<<b<<endl;
        }
};
int main(){
    A ob1,ob2(2,5),ob3(8);
    ob1.dis();
    ob2.dis();
    ob3.dis();
}