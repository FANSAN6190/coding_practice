/*2. There is a class student, that stores name of school or university from which he is enrolled and name of highest degree he has obtained so far. 
It has the function to get and display the members. Design a class Employee with name and employee number. Derive Manager, Scientist and Laborer classes 
from Employee class. The manager class has extra attribute title (string type) and dues (float type). The scientist class has extra attributes number of 
publications. The Laborer class has nothing extra. The classes have necessary functions for set and display the information. The manager and scientist are
 students of a university also. Use inheritance. Test your program by creating objects of type manager, scientists and laborer.  */
 
#include<iostream>
using namespace std;
class student{
	protected:
		string school;
		string degree;
	public:
		void get(){
			cin>>school;
			cin>>degree;
		}
		void disqf(){
			cout<<school<<"  "<<degree<<endl;
		}
};
class employee:public student{
	protected:
		string name;
		int emp_no;
};
class manager:public employee{
	protected:
		string title;
		float dues;
	public:
		void set(){
			cin>>emp_no;
			cin>>name;
			cin>>title;
			cin>>dues;
			get();
		}
		void display(){
			cout<<name<<" "<<emp_no<<" "<<title<<" "<<dues<<" ";
			disqf();
		}
};
class scientist:public employee{
	protected:
		int no_publ;
	public:
		void set(){
			cin>>name;
			cin>>emp_no;
			cin>>no_publ;
			get();
		}
		////////////////////////////////////////////////////////////////////
		void display(){
			cout<<name<<" "<<emp_no<<" "<<no_publ<<" ";
			disqf();
		}
};
class labourer:public employee{
	public:
		void set(){
			cin>>name;
			cin>>emp_no;
			get();
		}
		void display(){
			cout<<name<<" "<<emp_no<<" ";
			disqf();
		}
};
int main(){
	manager mn1;
	scientist s1;
	labourer l1;
	mn1.set();
	mn1.display();
	s1.set();
	s1.display();
	l1.set();
	l1.display();
	return 0;
}
