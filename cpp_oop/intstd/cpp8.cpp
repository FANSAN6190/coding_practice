#include<iostream>
using namespace std;

class vehicle{
    public:
    int speed;
    int milege;
    string fueltype;
};
class car:public vehicle{
    public:
    string brand;
    string model;
};
int main()
{
    car t1;
    cout<<"Enter the Brand Name = ";
    cin>>t1.brand;
    cout<<"Enter the Model Name = ";
    cin>>t1.model;
    cout<<"Enter the Speed Limit = ";
    cin>>t1.speed;
    cout<<"Enter the Milege = ";
    cin>>t1.milege;
    cout<<"Enter the Fueltype = ";
    cin>>t1.fueltype;
    cout<<" ",t1.brand;
    cout<<t1.brand<<"  "<<t1.model<<"  "<<t1.speed<<"  "<<t1.milege<<"  "<<t1.fueltype<<endl;
    return 0;
}