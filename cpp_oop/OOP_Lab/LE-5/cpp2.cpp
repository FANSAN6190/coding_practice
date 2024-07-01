/*A point in a two-dimensional plane having coordinate as (x,y), can be represented by a class whose private 
data members are x and y. Write the constructor and destructor functions of the class. The constructor should 
initialise (x,y) by passing parameters values. Now, a rectangle can be represented by the top-left and 
bottom-right vertices. Define a class say ‘Rectangle’ whose private data members are top-left and 
bottom-right vertices. Write the parameterised constructor function of the class ‘Rectangle’. Also, 
write the destructor function. Finally, write a program to show the order in which different constructors 
and destructors are called.*/
#include<iostream>
using namespace std;
int c=0,d=0;
class plane{
    int x;
    int y;
    public:
        plane():x(0),y(0){
            cout<<"constructor(P) call:"<<++c<<" x="<<x<<" y="<<y<<endl;
        }
        plane(int a,int b):x(a),y(b){
            cout<<"constructor(P) call:"<<++c<<" x="<<x<<" y="<<y<<endl;
        } 
        friend void display();
        ~plane(){
                cout<<"destructor(P) call:"<<++d<<" x="<<x<<" y="<<y<<endl;   

        }
        
};
class rectangle{
    plane tl;
    plane br;
    public:
    rectangle(plane &a,plane &b){
        cout<<"constructor(R) call:"<<++c<<endl;
        tl=a;
        br=b;
    }
    friend void display();
    ~rectangle(){
        cout<<"destructor(R) call:"<<++d<<endl;   
    } 
};
void display(){}

int main(){
    plane tl(1,2),br(3,6);
    rectangle r1(tl,br);
}


