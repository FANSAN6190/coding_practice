/*6. Create a class named Shirt that has the public data members collarsize and sleeveLength. Create a class named Pants that has the public data members waistSize
 and inSeam. Write a program that declares one object of each type Shirt and Pants and assigns values to the objects� data fields.  Write two overloaded functions 
 named displayClothingFacts(). One version of the function takes a Shirt object as an argument; the other version takes a Pants object. Each version displays the 
 facts about the piece of clothing. Your main() function should demonstrate that you can call displayClothingFacts() with either type of clothing.*/
#include<iostream>
using namespace std;
class shirt{
	public:
	    int collarsize,sleevelength;

}sh;
class pants{
    public:
	    int waistsize, inSeam;
}pn;
 int displayClothingFacts(shirt &sh){
 	cout<<"Collar Size = "<<sh.collarsize<<"\n";
 	cout<<"Sleeve Length = "<<sh.sleevelength<<"\n";
 	return 0;
 }
  int displayClothingFacts(pants &pn){
 	cout<<"Waist Size = "<<pn.waistsize<<"\n";
 	cout<<"inSeam = "<<pn.inSeam<<"\n";
 	return 0;
 }
int main()
{
	sh.collarsize=10;
	sh.sleevelength=20;
	pn.waistsize=30;
	pn.inSeam=40;
	displayClothingFacts(sh);
	displayClothingFacts(pn);
	return 0;
}



