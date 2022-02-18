//6. Write a program which finds a four digit number AABB which is a perfect square.
//A and B represent different digits. For example 7744 is a four digit perfect square
//number which is also satisfying the condition AABB ie.
//first two digits (AA=77) are same and last two digits (BB=44) are same.
#include<iostream>
using namespace std;
int sqr(int x);
int main(){
    int i,j,A,B;
    for(A=1;A<10;A++){
        for(B=0;B<10;B++){
            j=A*1000+A*100+B*10+B*1;
            sqr(j);
        }
    }
    return 0;
}
int sqr(int x){
    int i;
    for(i=0;i<x/4;i++){
        if(i*i==x){cout<<x<<" "<<i;}
    }
    return i;
}
