#include<iostream>
using namespace std;
class booking{
    public:
    string name;
    int EID;
    string starttime;
    string endtime;
};
class room: public booking{
    int chairs[5];
    int top=-1;
    public:
    int roomnum;
    int chaircapacity;
    bool isfull(){
        if(top==5){
            return true;
        }
        else{
            return false;
        }
    }
    bool isempty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }
    void push(int num){
        if(isfull()==true){
            cout<<"No space in Room"<<endl;
        }
        else{
            top++;
            chairs[top]=EID;
        }
    }
    int pop(){
        if(isempty()==true){
            cout<<"Room is Empty"<<endl;
        }
        else{
            chairs[top]=0;
            top--;
            return 1;
        }
    }
    void information(){
        cout<<"This is the room status"<<endl;
        for(int i=0;i<5;i++){
            cout<<chairs[i]<<endl;
        }
    }
};
int main(){
    int n=0;
    booking book[5];
    room room[2];
    while(n<5){
        cout<<"Enter the Name = ";
        cin>>room[n].name;
        cout<<"Enter the Employee ID = ";
        cin>>room[n].EID;
        //cout<<"Enter the Start Time = ";
        //cin>>room[n].starttime;
        //cout<<"Enter the End Time = ";
        //cin>>room[n].endtime;
        room[0].push(book[n].EID);
        n++;
    }
    room[0].information();
}