/*    2. Write a program to generate random numbers in given range [m, n].
Test case :
Input: m=10, n=50
Output:  34*/
#include<iostream>
#include<math.h>
#include<time.h>
using namespace std;
int main(){
    int d,m,n;
    unsigned r;
    srand((unsigned)time(NULL));
    cout<<"Enter the values of m and n = ";
    cin>>m>>n;
    for(int i=0;m<i && i<n;i++){
        r=m+(rand()%(m+1));
        cout<<r<<endl;
    }
    cout<<r;
    
}


    