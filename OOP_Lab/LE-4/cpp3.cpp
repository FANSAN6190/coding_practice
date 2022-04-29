/*Create two classes DM and DB which store the value of the distances. DM stores distances in meters 
and centimeters and DB in feet and inches. Write a program that can read values for the class objects 
and add one object of DM with another object of DB. Use a friend function to carry out the addition 
operation. The object that stores the results may be a DM object or DB object, depending on the units 
in which the results are required. The display should be in the format of feet and inches or meters 
and centimeters depending on the object on display.*/
/*class DM{
    int m,cm;
    public:
        void getdata(int a)
        
};
class DB{
    public:
        int feet, inch;
};
*/
#include<iostream>
using namespace std;
class DB;
class DM
{
    double m,cm;
    
    public:
    void getdata(int x, int y){
        m=x;
        cm=y;
    }
    void display();
    friend DB addition(DB& db,DM& dm);
    friend DM addition(DM& dm,DB& db){
        DM temp;
        temp.m=dm.m+db.f*0.3048;
        temp.cm=dm.cm+db.in*2.54;
        return temp;
    }
    friend void display();
};
class DB
{
    double f,in;

    public:
    void getdata(int x,int y){
        f=x;
        y=in;
    }
    friend DM addition(DM& dm,DB& db);
    friend DB addition(DB& db,DM& dm){
        DB temp;
        temp.f=db.f+dm.m*3.28;
        temp.in=db.in+dm.cm*0.392;
        return temp;
    }
    void display();
    
};
void DM::display()
{
    cout<<m<<" "<<cm<<endl;
}
void DB::display()
{
    cout<<f<<" "<<in<<endl;
}

int main()
{
    //int a,b,c,d;
    //cin>>a>>b>>c>>d;
    DM dm,dm1;
    DB db,db1;
    dm.getdata(2,4);
    db.getdata(2,4);
    dm1=addition(dm,db);
    dm1.display();
    db1=addition(db,dm);
    db1.display();
}