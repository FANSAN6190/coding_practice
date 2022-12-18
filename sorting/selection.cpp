#include<iostream>
#include<cstdlib>
#define max 100
using namespace std;
void swap(int a[],int x,int y){
    int t=a[x];
    a[x]=a[y];
    a[y]=t;
}

int locOfSmallest(int a[], int s, int e){
    int i=s;
    int j=i;
    while(i<=e){
        if (a[i]<a[j]){
            j=i;
        }
        i=i+1;
    }
    return j;
}

int *selSort(int a[],int n){
    int i=0;
    while(i<n-1){
        int j=locOfSmallest(a,i,-1);
        swap(a,i,j);
        i++;
    }
    return a;
}
void display(int a[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
    ///////////
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++){
        arr[i]=rand()%100;
    }
    ////////////
    int size=sizeof(arr)/sizeof(int);
    display(arr,size);
    selSort(arr,size);    
    display(arr,size);
    return 0;
}