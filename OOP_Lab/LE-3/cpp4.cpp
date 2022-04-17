/*Create a class rectangle with attributes length and width. Provide member functions that calculate the 
perimeter and area of the rectangle. Provide member functions to get the values from users and display the 
values of member variables. Write a program to test the class.*/
#include<iostream>
using namespace std;
class rectangle{
    int len,wid;
	public:
    void get_val(){
    	cout<<"Enter the length of Rectangle = ";
		cin>>len;
    	cout<<"Enter the breadth of Rectangle = ";
		cin>>wid;
	}
    int area(){
        return len*wid;
    }
    int perimeter(){
        return 2*(len+wid);
    }
}rc;
int main(){
    rc.get_val();
    cout<<rc.area()<<endl;
    cout<<rc.perimeter()<<endl;
}
