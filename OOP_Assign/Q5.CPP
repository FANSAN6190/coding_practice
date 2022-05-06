#include<iostream>
using namespace std;
class Integer{
    int n;
    int f;
    public:
        Integer():n(0){}
        Integer(int a):n(a){}
        int operator &(Integer ob){
            Integer temp;
            for(int i=1;i<=ob.n;i++){
                temp.f=temp.f*i;
            }
            int fac=temp.f;
            return temp.f;
        }
};
int main(){
    int fac;
    Integer ob1(4),ob2;
    
}