/*Q4. Create a class FLOAT that contains one float data member. Overload all four arithmetic
operators so that they operate on the objects of FLOAT*/

#include<iostream>
using namespace std;
class FLOAT{
    float a;
    public:
    FLOAT():a(0){}
    FLOAT(float x):a(x){}
    FLOAT operator +(FLOAT &ob){
        FLOAT temp;
        temp.a=a+ob.a;
        return temp;
    }
    FLOAT operator -(FLOAT &ob){
        FLOAT temp;
        temp.a=a-ob.a;
        return temp;
        
    }
    FLOAT operator *(FLOAT &ob){
        FLOAT temp;
        temp.a=a*ob.a;
        return temp;
    }
    FLOAT operator /(FLOAT &ob){
        FLOAT temp;
        temp.a=a/ob.a;
        return temp;
    }
    void display(){
        cout<<a<<endl;
    }
};
int main(){
    FLOAT ob1(0.5),ob2(2.5),ob3(4.5),ob4;
    ob4=ob1+ob2;
    ob4.display();
    ob4=ob3-ob2;
    ob4.display();
    ob4=ob1*ob2;
    ob4.display();
    ob4=ob3/ob1;
    ob4.display();
    return 0;
}
