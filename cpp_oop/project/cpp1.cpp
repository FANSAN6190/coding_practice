/*Write a program that defines a shape class with a constructor that gives value to width and height. The 
define two sub-classes triangle and rectangle, that calculate the area of the shape area (). In the main, 
define two variables a triangle and a rectangle and then call the area() function in this two varibles */
#include<iostream>
using namespace std;
class shape{
    public:
    float w,h; 
}sha;
class rectangle:public shape{
    public:
    float area(){
        return w*h;
    }
}rec;
class tringle:public shape{
    public:
    float area(){
        return w*h*(1.0/2);
    }
}tri;
int main(){
    cout<<"Enter the Height and Width of Rectangle = ";
    cin>>sha.h>>sha.w;
    rec.h=sha.h;
    rec.w=sha.w;
    cout<<"Area of Rectangle = "<<rec.area()<<endl;
    tri.h=sha.h;
    tri.w=sha.w;
    cout<<"Area of Tringle = "<<tri.area()<<endl;
    return 0;
}