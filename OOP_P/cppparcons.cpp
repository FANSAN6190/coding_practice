#include<iostream>
using namespace std;
class employee{
    int id;
    string name;
    float salary;
    public:
    employee(int i, string n, float s){
        id=1;
        name=n;
        salary=s;

    }
    void display(){
        cout<<id<<" "<<name<<" "<<salary<<endl;
    }
};
int main(void) {
    employee e1 =employee(101, "Sonoo", 890000); //creating an object of Employee 
    employee e2=employee(102, "Nakul", 59000); 
    e1.display();  
    e2.display();  
    return 0;
}