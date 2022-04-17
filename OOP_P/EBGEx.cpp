#include<iostream>
#include<cmath>
using namespace std;
int main(){
    float V,P,P0,fws=4.844,T=112;
    float tem[50],volt[50],rho[50],rho0[50];
    for(int i=0;T>39;i++){
        int x;
        T=T-2;
        cin>>x;
        cin>>V;
        P0=(V*2*3.14*0.2)/0.002;
        P=P0/fws;

        tem[i]=T;
        volt[i]=V;
        rho[i]=P;
        rho0[i]=P0;
    }
    for(int i=0;i<50;i++){
        cout<<i+1<<"    "<<tem[i]<<"     "<<tem[i]+273.15<<"    "<<volt[i]<<" "<<"        "<<rho[i]<<"        "<<((1/tem[i])*1000)<<"         "<<log(rho[i])<<endl;
    }
    return 0;
}