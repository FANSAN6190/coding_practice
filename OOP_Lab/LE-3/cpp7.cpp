/*7. Define a class named Movie. Include private fields for the title, year, and name of the director. Include three public 
functions with the prototypes void Movie::setTitle(string); , void Movie::setYear(int); and void Movie::setDirector(string);. 
Include another function that displays all the information about a Movie. Write a main() function that declares a movie object 
named myFavoriteMovie. Set and display the object�s fields.*/
#include<iostream>
using namespace std;
class movie{
	string title,drt_name;
	int year;
	public:
		void setTitle(string);
		void setYear(int);
		void setDirector(string);
		void display();
};
void movie::setTitle(string s){title=s;}
void movie::setYear(int y){year=y;}
void movie::setDirector(string d){drt_name=d;}
void movie::display(){
	cout<<"Title = "<<title<<"\n";
	cout<<"Director = "<<drt_name<<"\n";
	cout<<"year = "<<year<<"\n";
}
int main(){
    movie myFavoriteMovie;
    myFavoriteMovie.setTitle("Hello");
	myFavoriteMovie.setDirector("abcd efgh");
    myFavoriteMovie.setYear(2025);
    myFavoriteMovie.display();
    return 0;
}
