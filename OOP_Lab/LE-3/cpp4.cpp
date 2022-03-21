/*Create a class rectangle with attributes length and width. Provide member functions that calculate the 
perimeter and area of the rectangle. Provide member functions to get the values from users and display the 
values of member variables. Write a program to test the class.*/
#include<iostream>
using namespace std;
class rectangle{
    public:
    int len,wid;
    int area(){
        return len*wid;
    }
    int perimeter(){
        return 2*(len+wid);
    }
}rc;
int main(){
    cout<<"Enter the length of Rectangle = ";
    cin>>rc.len;
    cout<<"Enter the length of Rectangle = ";
    cin>>rc.wid;
    cout<<rc.area()<<endl;
    cout<<rc.perimeter()<<endl;
}