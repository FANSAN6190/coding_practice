#include<stdio.h>
void main(){
    int n,max=0,min;
    printf("Enter the Number of Elements = ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the values\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
        if(max<arr[i]){
            max=arr[i];
        }
        else if(min>arr[i]){
            min=arr[i];
        }
    }
    printf("max= \n",max);
    printf("min= \n",min);
}