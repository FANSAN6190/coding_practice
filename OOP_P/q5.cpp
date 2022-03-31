#include<iostream>
using namespace std;
struct multi{
    int a;
    int b;
    int que(){
        srand(time(0));
        a = rand() % 10;
        b = rand() % 10;
        cout<<"How much is "<<a<<" times "<<b<<" ";
    }
}t1;
int response(int a){
    int r=rand()%4;
    switch(r){
    case 0:
        cout<<"Very Good\n";
        break;
    case 1:
        cout<<"Excelent\n";
        break;
    case 2:
        cout<<"Nice Work\n";
        break;
    case 3:
        cout<<"Keep up the good work\n";
        break;
    }
}
int response(){
    int r=rand()%4;
    switch(r){
    case 0:
        cout<<"No please try again.\n";
        break;
    case 1:
        cout<<"Wrong,try once more.\n";
        break;
    case 2:
        cout<<"don't give up.\n";
        break;
    case 3:
        cout<<"no keep trying.\n";
        break;
    }
}
int main(){
    int ans,c=0,w;
    for(int i=0;i<10;i++){
        t1.que();
    ta :cin>>ans;
        if(ans==t1.a*t1.b){
            if(w!=1){c++;}
            response(1);
            w=0;
        }
        else{
            response();
            w=1;
            goto ta;
        }
    }
    float per=(c/10.0)*100.0;
    cout<<"Percentage = "<<per<<endl;
    return 0;
}
