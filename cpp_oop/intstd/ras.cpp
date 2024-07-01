#include<iostream>
using namespace std;

class booking{
    int rooms[5];
    int booking_number=0;           
    public:
    booking(){
        for(int i=0;i<5;i++){rooms[i]=0;}
    }
    int isbookingfull(){
        if(entry==4){
            return true;
        }
        else{
            return false;
        }
    }
    int isbookingempty(){
        if(entry==-1){
            return true;
        }
        else{
            return false;
        }
    }
    void regist(){
        cout<<"Enter the Room Number = ";
        cin>>
    }
    void book(int ID){
        if(isbookingfull()==true){
            cout<<"we are very soory, No rooms are Available right now."<<endl;
        }
        else{
            entry++;
            booking_number++;
            rooms[entry]=ID;
        }
    }
    void bookingstatus(){
        for(int i=0;i<5;i++){
            cout<<i+1<<" "<<rooms[i]<<endl;
        }
    }

};
class room{
    int room_number=100;
    int seats;
    int *room_seats;
    int top=-1;
    public:
    room(){
        for(int i=0;i<5;i++){*(room_seats+i)=0;}
    }
    int isroomfull(){
        if(top==seats-1){
            return true;
        }
        else{
            return false;
        }
    }
    int isroomempty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }  
};
int main(){
    
}