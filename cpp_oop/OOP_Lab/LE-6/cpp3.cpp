/*    3. Overload ‘+’ operator that adds two strings to make a third string. Write a program to do the following tasks:
        i. Create uninitialized string objects
        ii. Creates the objects with string constants.
        iii. Concatenates two strings properly using operator overloading.
        iv. Displays a desired string object */

#include<iostream>
#include<string.h>
using namespace std;
class ring{
    char str[50];
    public:
        ring():str("\0"){}
        ring(char s[50]){
            strcpy(str,s);
        }
        ring operator +(ring &ob){
            ring t;
            strcpy(t.str,strcat(str,ob.str));
            return t;
        }
        void dis(){
            cout<<str<<endl;
        }
};
int main(){
    ring ob1("Hello"),ob2("World"),ob3;
    ob3=ob1+ob2;
    ob3.dis();
    return 0;
}