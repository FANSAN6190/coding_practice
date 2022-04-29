#include<iostream>
#include<cmath>
using namespace std;
class Point{
    float x1,y1;
    Point(float a, float b):x1(a),y1(b){}
    public:
        static Point polar(float a, float b){
            return Point(a*cos(b),a*sin(b));
        }
        static Point rectangle(float a,float b){
            return Point(a,b);
        }

        void display(){
            cout<<"x = "<<this->x1<<endl;
            cout<<"y = "<<this->y1<<endl;
        }
};
int main(){
    Point pp=Point::polar(5.7,1.2);
    cout<<"Polar = ";
    pp.display();

    Point pr=Point::rectangle(5.7,1.2);
    cout<<"rectangle = ";
    pr.display();
}