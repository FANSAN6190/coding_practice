#include<iostream>
using namespace std;
class myclass{
    public: 
    void mymethod(){
        cout<<"\nHello World!!!!!!\n";
    }
    int calc(int x,int y);
};
int myclass::calc(int x,int y){
    cout<<"Sum="<<x+y<<endl;
    cout<<"Difference="<<x-y<<endl;
    cout<<"Product="<<x*y<<endl;
    cout<<"Division="<<x/y<<endl;
    int t=x;
    for(int i=1;i<y;i++){
        x=x*t;
    }
    return x;    
}
int main(){
    myclass myobj;
    myobj.mymethod();
    int a,b,p;
    cout<<"Enter the 2 Numbers = "<<endl;
    cin>>a>>b;
    p=myobj.calc(a,b);
    cout<<"a to the Power b = "<<p;
    return 0;
}