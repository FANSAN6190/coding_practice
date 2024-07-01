#include<iostream>
using namespace std;
int main(){
    int w;
    cin>>w;
    for (int i=1;i<=w;i++){
        for (int j=1;j<=w;j++){
            if(i%2!=0 && j&2!=0 && i!=j && i+j==w){
                cout<<"YES"<<endl;
                return 0;
            }
        }
    }
    cout<<"NO"<<endl;
    return 0;
}