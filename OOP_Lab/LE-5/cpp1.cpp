/*1. Write a program to perform addition of two complex numbers using constructor overloading. The first 
constructor which takes no argument is used to create objects which are not initialized, second which takes 
one argument is used to initialize real and imaginary parts to equal values and third which takes two argument 
is used to initialized real and imaginary to two different values. Include sum member function that takes 
two objects and performs the addition of these two objects. Write display function to display the object 
in complex form  i.e. 2+i6. Write main function to test your program.*/

#include<iostream>
using namespace std;
class complex{
	int real;
	int img;
	public:
		complex():real(0),img(0){}
		complex(int a):real(a),img(a){}
		complex(int a, int b):real(a),img(b){}
		
		complex sum(complex &ob1,complex &ob2){
			this->img=ob1.img+ob2.img;
			this->real=ob1.real+ob2.real;
			return *this;
		}

		void display(){
			cout<<real<<"+"<<img<<"i\n";
		}
};
int main(){
	complex ob1(1,4),ob2(3,3),ob3;
	ob3.sum(ob1,ob2);
	ob1.display();
	ob2.display();
	ob3.display();
	return 0;
}
