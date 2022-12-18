#include<iostream>
#include<cstdlib>
#define max 100
using namespace std;
int main(){
    int n;
    int arr[max];
    cin>>n;
    for (int i = 0; i < n; i++){
        arr[i]=rand()%100;
    }
    
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //sorting- 
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(arr[j]>arr[i]){
                swap(arr[i],arr[j]);
            }
        }

    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}