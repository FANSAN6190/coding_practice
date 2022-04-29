#include<iostream>
using namespace std;
class cities;
class customer{
    public:
        int cust_no;
        int zip;
        friend void display(customer , cities);

};
class cities{
    public:
        string city;
        string state;
        string city_zip;
        friend void display(customer , cities);
};
void display(customer a, cities b){
    cout<<"Customer Details-->\n"<<"Customer Name = "<<a.cust_no<<"\nCustomer ZIP = "<<a.zip<<endl;
    cout<<"City Details-->\n"<<"City Name = "<<b.city<<"\nState = "<<b.state<<"\nCity ZIP = "<<b.city_zip<<endl;
}
int main(){
    customer c1;
    cities cy1;
    c1.cust_no=1001;
    c1.zip=472112;
    cy1.city="Indore";
    cy1.state="Madhya Pradesh";
    cy1.city_zip="472472";
    display(c1,cy1);
}