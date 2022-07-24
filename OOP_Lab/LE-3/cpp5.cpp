/*5. Write a function that accepts two arguments: a string name of a movie and an integer running time in minutes. Provide a default value for the 
minutes so that if you call the function without an integer argument, the minutes default to 90. Write a main() function that proves that you can call the
 function with a string argument alone as well as with a string and an integer.*/
#include<iostream>
using namespace std;
int fn1(string mov,int min=90){
    cout<<"MOvie = "<<mov<<"\nDuration = "<<min<<"\n\n";
    return 0;
}
int main()
{
	string m;
	int n;
	cout<<"Enter the Movie name and duration in minutes = ";
	cin>>m>>n;
	fn1(m,n);
	fn1(m);
	return 0;
}

