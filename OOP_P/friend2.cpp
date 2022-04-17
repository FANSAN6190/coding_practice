#include<iostream>
using namespace std;
class A{
    int a;
    public:
    A(){
        a=0;
    }
    friend class B;
};
class B{
    int b;
    public:
    void showPA(A& x){
        cout<<"A:a="<<x.a;
    }
    friend class A;
};
int main(){
    A ob1;
    B ob2;
    ob2.showPA(ob1);
    double x=22.0,y=7.0;
    cout<<"\n"<<x/7.0<<"\n";
    cout<<sizeof(int)<<endl;
    return 0;
}