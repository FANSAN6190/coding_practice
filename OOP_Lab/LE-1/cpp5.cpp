//5. Write a program to round off an integer �i� to the next largest multiple of another integer �j�.
//For example, you will get 259 if i=256 is rounded off to the next largest multiple of j=7.2
#include<iostream>
using namespace std;
int main(){
    int i,j;
    cout<<"Enter the Number i and j = ";
    cin>>i>>j;
    //i=(i-1)+(i%j);
    while(i%j!=0){
        i++;
    }
    cout<<i<<" "<<j;
}