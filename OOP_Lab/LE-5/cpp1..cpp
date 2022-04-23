/*1. Write a program to perform addition of two complex numbers using constructor overloading. The first constructor which takes no argument is used to create
 objects which are not initialized, second which takes one argument is used to initialize real and imaginary parts to equal values and third which takes
  two argument is used to initialized real and imaginary to two different values. Include sum member function that takes two objects and performs the addition
   of these two objects. Write display function to display the object in complex form  i.e. 2+i6 . Write main function to test your program.*/
   
#include<iostrem>
usin namespace std;
class complex{
	int real;
	int img;
	public:
		complex():x(0),y(0){}
		complex(int a){x=y=a;}
		complex(int a,int b):x(a):y(b){}
		void display(){
			cout<<x<<" "<<y<<endl;
		}
		
};
   
