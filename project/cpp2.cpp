//Create a class named 'Student' with a string variable 'name' and an integer variable 'roll_no'. Assign 
//the value of roll_no as '2' and that of name as "John" by creating an object of the class Student.
#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int rn;
};
int main(){
    student std1;
    student std2={"Sam",200};
    std1.name="John";
    std1.rn=213;
    cout<<std1.name<<" "<<std1.rn<<endl;
    cout<<std2.name<<" "<<std2.rn<<endl;
}
