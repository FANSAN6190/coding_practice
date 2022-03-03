#include<iostream>
using namespace std;
int k=0;
class booking{
    public:
    struct form
    {
        int ID;
        int roomnumber;
        char host[20];
        char start[5];
        char end[5]; 
        char from[10]; 
        char to[10]; 
        
    }rgs[10];
    char chair[8][4][10];
    void book();
    void reserve();
    void empty();
    void status();
    void available();
}bkc;
void booking:: book(){
    cout<<"Enter the room number = ";
    cin>>bkc.rgs[k].roomnumber;
    cout<<"Enter the Host name = ";
    cin>>bkc.rgs[k].host;
    cout<<"Session will Start at = ";
    cin>>bkc.rgs[k].start;
    cout<<"Session will End at = ";
    cin>>bkc.rgs[k].end;
    cout<<"Book from = ";
    cin>>bkc.rgs[k].from;
    cout<<"To = ";
    cin>>bkc.rgs[k].to;
    k++;
}
void booking::reserve(){
    int n;
    int ch;
    cout<<"Room Number = ";
    cin>>n;
    cout<<"Enter the chair number = ";
    cin>>ch;
    if(ch>32){
        cout<<"There are only 32 chairs.";
    }
    else{
        cout<<"Enter the travellar's name.";
        cin>>bkc.
    }
} 


int main(){

    return 0;
}