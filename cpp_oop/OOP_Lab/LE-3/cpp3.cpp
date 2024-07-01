/*3. Create a four-function calculator for fractions. Here are the formulas for the four arithmetic 
operations applied to fractions: 
Addition: a/b + c/d = (a*d + b*c) / (b*d) 
Subtraction: a/b - c/d = (a*d - b*c) / (b*d) 
Multiplication: a/b * c/d = (a*c) / (b*d) 
Division: a/b / c/d = (a*d) / (b*c) 
The user should type the first fraction (two values a and b), an operator, and a second fraction 
(two values c and d). The program should then display the results in fraction ie. (Numerator/ denominator).*/
#include<iostream>
using namespace std;
class ffcalc{
    public:
    int a,b,c,d;
    void addition(){
        cout<<"Addition = "<<(a*d+b*c)<<"/"<<b*d<<endl;
    }
    void subtraction(){
        cout<<"Subtraction = "<<(a*d-b*c)<<"/"<<b*d<<endl;
    }
    void multiplication(){
        cout<<"Multiplication = "<<(a*c)<<"/"<<b*d<<endl;
    }
    void division(){
        cout<<"Division = "<<(a*d)<<"/"<<b*c<<endl;
    }
};
int main()
{
    ffcalc c1;
    char o,q;
    cout<<"Enter the Values in Fraction-\n";
    cout<<"Enter the expresion = ";
    cin>>c1.a>>q>>c1.b>>o>>c1.c>>q>>c1.d;
    cout<<"Results in Fraction-\n";
    if(o=='+')
        c1.addition();
    else if(o=='-')
        c1.subtraction();
    else if(o=='x' || o=='*')
        c1.multiplication();
    else if(o=='/')
        c1.division();
    else
        cout<<"Wrong Operator\n";
    return 0;
}