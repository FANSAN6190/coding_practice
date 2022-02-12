#include<iostream>
using namespace std;
class car{
    private:
        int asd;
    public:
        string brand;
        string model;
        int year;
        car(string x,string y, int z);        
        ~car();        
};
car::car(string x,string y, int z){
        brand=x;
        model=y;
        year=z;
    }
car::~car(){
    cout<<"Distruction!!!!!!";
}
int main(){
    car carobj1("qww","ads",2011);
    cout<<carobj1.brand<<" "<<carobj1.model<<" "<<carobj1.year<<endl;
return 0;
}
