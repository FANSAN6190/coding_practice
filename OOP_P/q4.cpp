#include<iostream>
#include<random>
#include<time.h>
using namespace std;
void flip(){
    int h,t;
    for(int i=0;i<100;i++){
        int r = rand() % 2;
        if(r==1)
            h++;
        else
            t++;
    }
    cout<<"Heads = "<<h<<endl;
    cout<<"Tails = "<<t<<endl;
}
int main(){
    srand(time(0));
    flip();
}