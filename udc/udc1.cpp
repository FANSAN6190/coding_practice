#include<iostream>
using namespace std;       
int main(){
    string arr[10][2]={"adfda","13311","afd","4132"};
    for(int i=0;i<10;i++){
        cout<<arr[i][0]<<" "<<arr[i][1]<<endl;
    }
    return 0;
}