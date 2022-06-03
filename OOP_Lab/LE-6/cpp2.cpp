/*2. Create a class rational for performing arithmetic with fractions. Use an integer variable
 to represent the private data of the class-the numerator and denominator. Provide a member 
 function to get input from the user. This function should also check that denominator entered
is not 0, if it is zero print invalid input. Provide a function to display the values. 
Overload +, -, *, / operators to add, subtract, multiply and divide the objects of this class.*/
#include<iostream>
using namespace std;
class rational{
	int n,d;
	char q;
	public:
		void getinp(){
			int a,b;
			cout<<"Enter the Rational Number = ";
			cin>>a>>q>>b;
			if(b==0){cout<<"Math Error (Invalid Input)";}
			else{
				n=a;
				d=b;
			}
		}
		rational simplify(rational& r1){
			rational tem;
			for(int n=r1.d;n>0;n--){
				if(r1.n%n==0 && r1.d%n==0){
					tem.n=r1.n/n;
					tem.d=r1.d/n;
				}
			}
			return tem;
		}
		rational operator +(rational& f2){
			this->n=(n*f2.d)+(d*f2.n);
			this->d=(d*f2.d);
			return *this;		
		}
		rational operator -(rational& f2){
			this->n=(n*f2.d)-(d*f2.n);
			this->d=(d*f2.d);
			return *this;
		}
		rational operator *(rational& f2){
			this->n=(n*f2.n);
			this->d=(d*f2.d);
			return *this;
		}
		rational operator /(rational& f2){
			this->n=(n*f2.d);
			this->d=(d*f2.n);
			return *this;
		}
		
		void display(){
			cout<<"Output\n"<<n<<"/"<<d<<endl;
		}
};
int main(){
	rational ob1,ob2,ob3;
	ob1.getinp();
	ob2.getinp();
	ob3=ob1+ob2;
	ob3.display();
	ob3=ob1-ob2;
	ob3.display();
	ob3=ob1*ob2;
	ob3.display();
	ob3=ob1/ob2;
	ob3.display();
}
