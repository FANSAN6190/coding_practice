#include<iostream>
using namespace std;
int main(){
    int i=0;
    int j=0,k=0;
    while(i<5){
        j=0;
        while(j<5){
            if(i>j){
                cout<<'*';
            while(k<5){
                cout<<'\t';
                }
            }            
            j++;
        }
        cout<<'\n';
        i++;
    }
}