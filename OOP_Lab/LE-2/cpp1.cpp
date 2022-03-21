/* 1. Write a function that finds the minimum and the maximum value in an array of N integers. Inputs to 
the function are the array of integers, an integer variable containing the length of the array and pointers 
to integer variables that will contain the minimum and the maximum values.The function prototype is:
void minmax( int array[], int length, int * min, int * max);
Write a main function that uses this function to find and display the minimum and the maximum values of an 
array of integers. */
#include<iostream>
using namespace std;
int minmax(int ar[],int l, int *min,int *max);
int main(){
    int n,max=INT32_MIN,min=INT32_MAX;
    cout<<"Enter the Number of Elements = ";
    cin>>n;
    int ar[n];
    cout<<"Enter the values"<<endl;
    for(int i=0;i<n;i++){
        cin>>*(ar+i);
    }
    minmax(ar,n,&min,&max);
    cout<<endl<<"maximum value = "<<max;
    cout<<endl<<"minimum value = "<<min;
}
int minmax(int ar[],int l, int *min,int *max){
    for(int i=0;i<l;i++){
        if(ar[i]<*min){
            *min=ar[i];
        }
        if(ar[i]>*max){
            *max=ar[i];
        }
        cout<<"min= "<<*min<<" max= "<<*max<<endl;
    }
    return 0;
}