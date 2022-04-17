#include<iostream>
using namespace std;
string snum(){
    char c1='A';
    char c2='A';
    char *str;
    for(char c1='A';c1<'G';c1++){
        for(char c2='A';c2<'G';c2++){
            for(char i=0;i<10;i++){   
                str[0]=c1;
                str[1]=c2;
                str[2]=i;
                str[3]='\0';
                return str;
            }
        }
    }
}
int main(){
    cout<<snum()<<endl;
    return 0;
}
