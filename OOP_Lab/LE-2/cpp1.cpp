/* 1. Write a function that finds the minimum and the maximum value in an array of N integers. Inputs to 
the function are the array of integers, an integer variable containing the length of the array and pointers 
to integer variables that will contain the minimum and the maximum values.The function prototype is:
void minmax( int array[], int length, int * min, int * max);
Write a main function that uses this function to find and display the minimum and the maximum values of an 
array of integers. */
#include<iostream>
using namespace std;
int main(){
    int n,max=0,min=INT32_MAX;
    cout<<"Enter the Number of Elements = ";
    cin>>n;
    int *arr;
    cout<<"Enter the values"<<endl;
    for(int i=0;i<n;i++){
        cin>>*(arr+i);
    }
    for(int i=0;i<n;i++){
        cout<<*(arr+i)<<" ";
        if(max<*(arr+i)){
            max=*(arr+i);
        }
        else if(min>*(arr+i)){
            min=*(arr+i);
        }
    }
    cout<<endl<<"maximum value = "<<max;
    cout<<endl<<"minimum value = "<<min;
}