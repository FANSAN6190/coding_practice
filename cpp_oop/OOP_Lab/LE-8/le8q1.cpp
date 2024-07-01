/*1. Create a base class called shape. Use this class to store two double type values that could be used to compute the area of figures. 
Derive two specific classes called triangle and rectangle from the base shape. Add to the base class, a member function get_data( ) to initialize 
base class data members and another member function display_area( ) to compute and display the area of figures. Make display_area( ) as a virtual 
function and redefine this function in the derived classes to suit their requirements. 
(A). Using these three classes, design a program that will accept dimensions of a triangle or a rectangle interactively and display the area using 
the concept of dynamic binding. Remember the two values given as input will be treated as lengths of two sides in the case of rectangles and as base 
and height in the case of triangles and used as follows:
Area of rectangle = x * y
Area of triangle = � * x * y
(B). Extend the Program-1 to display the area of circle. This requires addition of a new derived class �circle� that computes the area of a circle. 
Remember, for a circle we need only one value, its radius, but the get_data() function in the base class requires two values to be passed. (Hint: Make 
the second argument of get_data() function as a default one with zero value.)
(C). Run the above program with the following modifications:
Remove the definition of display_area() from one of the derived classes.
In addition to the above change, declare the display_area() as pure virtual in the base class shape.
	Comment on the output in each case.*/

#include<iostream>
using namespace std;
class shape{
	protected:
		double x;
		double y;
	public:
		virtual void display_area()=0;
		void get_data(double a, double b=0){
			x=a;
			y=b;
		}	
};
class tringle : public shape{
	public:
		virtual void display_area(){
			cout<<"area="<<x*y/2<<endl;
		}
};
class rectangle : public shape{
	public:
		virtual void display_area(){}	
};
class circle : public shape{
	public:
		virtual void display_area(){
			cout<<"area="<<(3.141592*x*x)<<endl;
		}
};
int main(){
	tringle tr1;
	tr1.get_data(3,5);
	tr1.display_area();
	rectangle rec1;
	rec1.get_data(3,5);
	rec1.display_area();
	circle c1;
	c1.get_data(3);
	c1.display_area();
	return 0;
}

