#include<iostream>
using namespace std;
struct time{
    int hour;
    int min;
    int sec;
    int hms_to_time(){
    sec=sec+min*60+hour*60*60;
    return sec;
    }
}t;
int main(){
    cout<<"Enter the time = ";
    cin>>t.hour>>t.min>>t.sec;
    cout<<t.hms_to_time()<<endl;
    return 0;
}