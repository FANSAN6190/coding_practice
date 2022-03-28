/*Write a function that finds the minimum and the maximum value in an array of N integers. Inputs to 
the function are the array of integers, an integer variable containing the length of the array and references 
to integer variables that will contain the minimum and the maximum values. The function prototype is: 	
void minmax( int array[], int length, int& min, int & max);*/
#include<iostream>
using namespace std;
void minmax(int array[],int length,int &min, int &max);
int main(){
    int l,mn=INT32_MAX,mx=0;
    cin>>l;
    int ar[l];
    for(int i=0;i<l;i++)
        cin>>ar[i];
    minmax(ar,l,mn,mx);
    cout<<mn<<" "<<mx<<endl;
}
void minmax(int array[],int length,int &min, int &max){
    for(int i=0;i<length;i++){
        if(min>array[i])
            min=array[i];
        if(max<array[i])
            max=array[i];
    }
}
