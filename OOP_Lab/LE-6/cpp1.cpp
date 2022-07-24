/*
1. Design a class Distance that includes following data members: feet, inches. It has the following member function:-
Constructor, that initializes the distance to 0,0  by default. 
Parameterized Constructor that initializes the distance with some values; give a check so that the inches part is always less than 12.0.
Display function
Overloaded � operator to subtract 2 distances
Overloaded + operator to add 2 distances
Overload += and -= operator
Overload > and < operators to compare two distances
*/
#include <iostream>
using namespace std;
class dist{
	float feet;
	float inch;
	public:
	dist():feet(0),inch(0){}
	dist(int a,int b){
		feet=a;
		if(b<12){inch=b;}
		else{inch=0;}
	}
//Overloaded � operator to subtract 2 distances	
	dist operator -(dist &ob){
		dist ob3;
		ob3.feet=feet-ob.feet;
		ob3.inch=inch-ob.inch;
		return ob3;
	}
//Overloaded + operator to add 2 distances
	dist operator +(dist &ob){
		dist ob3;
		ob3.feet=feet+ob.feet;
		ob3.inch=inch+ob.inch;
		return ob3;
	}
//Overload += and -= operator
	dist operator +=(dist &ob){
		dist ob3;
		ob3.feet=feet+=ob.feet;
		ob3.inch=inch+=ob.inch;
		return ob3;
	}
	dist operator -=(dist &ob){
		dist ob3;
		ob3.feet=feet-=ob.feet;
		ob3.inch=inch-=ob.inch;
		return ob3;
	}
//Overload > and < operators to compare two distances
		int operator >(dist &ob){
			int x=feet*12+inch;
			int y=ob.feet*12+ob.inch;
			if(x>y){
				return 1;
			}
			else{
				return 0;
			}
		}
		int operator <(dist &ob){
			int x=feet*12+inch;
			int y=ob.feet*12+ob.inch;
			if(x<y){
				return 1;
			}
			else{
				return 0;
			}
		}
		int operator ==(dist &ob){
			int x=feet*12+inch;
			int y=ob.feet*12+ob.inch;
			if(x==y){
				return 1;
			}
			else{
				return 0;
			}
		}
	void display(){
		cout<<feet<<" "<<inch<<endl;
	}
};
int main(){
	dist ob1(2,3),ob2(1,2),sub,add;
	sub=ob1-ob2;
	sub.display();
	add=ob1+ob2;
	add.display();
	cout<<(ob1==ob2)<<endl;
	cout<<(ob1>ob2)<<endl;
	cout<<(ob1<ob2)<<endl;
}

