//3. Write a function to reverse an array of long double types. Call this function from main function.
#include<stdio.h>
int n;
int rev(long double ar[]);
int main(void){
    printf("Enter the Array Size = ");
    scanf("%d",&n);
    long double arr[n];
    printf("Enter the Values of array=>");
    for(int i=0;i<n;i++){
        scanf("%Lf",&arr[i]);
    }
    rev(arr);
    return 0;
}
int rev(long double ar[]){
    for(int i=0;i<n/2;i++){
        int t=ar[i];
        ar[i]=ar[n-1-i];
        ar[n-1-i]=t;
    }
    for(int i=0;i<n;i++){
        printf("%Lf\n",ar[i]);
    }
    return 0;
}

