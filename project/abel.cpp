#include<iostream>
using namespace std;
int n;
int search(int *set,int a);
int main(){
    cin>>n;
    int e=0,set[n];
    for(int i=0;i<n;i++){
        cin>>set[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(search(set,set[i]*set[j]))
                e++;
        }
    }
    if(e>n){
        cout<<"Element is closure\n";
    }
    return 0;
}
int search(int *set,int a){
    for(int i=0;i<n;i++){if(set[i]==a)return 1;}
    return 0;
}