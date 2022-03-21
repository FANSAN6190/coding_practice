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
int main()
{
    int a,b,c,d;
    char o;
    cout<<"Enter the Values in Fraction-\n";
    cout<<"Enter the expresion = ";
    cin>>a>>b>>o>>c>>d;
    cout<<"Results in Fraction-\n";
    if(o=='+')
        cout<<"Addition = "<<(a*d+b*c)<<"/"<<b*d<<endl;
    else if(o=='-')
        cout<<"Subtraction = "<<(a*d-b*c)<<"/"<<b*d<<endl;
    else if(o=='x' || o=='*')
        cout<<"Multiplication = "<<(a*c)<<"/"<<b*d<<endl;
    else if(o=='/')
        cout<<"Division = "<<(a*d)<<"/"<<b*c<<endl;
    else
        cout<<"Wrong Operator\n";
    return 0;
}
