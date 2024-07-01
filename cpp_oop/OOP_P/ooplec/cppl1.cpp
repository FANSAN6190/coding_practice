#include<iostream>
using namespace std;
class base1{
    protected: int x,y;
    public:
        base1(){cout<<"Base1 def cons\n";}
        base1(int a,int b):x(a),y(b){cout<<"base1 para cons\n"; }
        //~base1(){cout<<"Base1 Diss\n";}
};
class base2{
    protected: int p,q;
    public:
        base2(){cout<<"Base2 def cons\n";}
        base2(int a,int b):p(a),q(b){cout<<"base2 para cons\n"; }
        //~base2(){cout<<"Base2 Diss\n";}
};
class derive: public base2,public base1{
    protected: int a,b;
    public:
        derive(){"derive def cons\n";}
        derive(int a,int b ,int c,int d,int e,int f):base1(a,b),base2(c,d),a(e),b(f){cout<<"derive para cons"<<endl;} //explicit calling of base class constructor.
        //~derive(){cout<<"derive dis"<<endl;}
        void display(){
            cout<<x<<" "<<y<<" "<<p<<" "<<q<<" "<<a<<" "<<b<<"\n";
        }
};
//constructor will be initialised on the basis of the sequence of inheritance.
int main(){
    derive d(1,2,3,4,5,6);
    d.display();
    return 0;
}
