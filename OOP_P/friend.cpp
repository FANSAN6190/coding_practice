#include<iostream>
using namespace std;
class B;
class A{
    int x;
    friend int add(A&,B&);

};
class B{
    int y;
    
    friend int add(A&,B&);
};
int add(A& ob1, B& ob2){
    ob1.x=10;
    ob2.y=1;
    return ob1.x+ob2.y;
}
int main(){
    A a;
    B b;
    cout<<add(a,b);
    return 0;
}