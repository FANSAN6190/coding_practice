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
    time_t t;
    srand((unsigned)time(&t));
    cout<<"Enter the values of m and n = ";
    cin>>m>>n; 
    for(int i=m;i<n;i++){
        cout<<rand()%n<<endl;
    }   
}