//2. Write a program to calculate factorial of a number N using recursion.
#include<stdio.h>
int fact(int n);
void main(){
    int n;
    printf("Enter the Number = ");
    scanf("%d",&n);
    printf("\n%d",fact(n));
}
int fact(int n){
    int f=n;
    if(n==1){
        return 1;
    }
    else{
        return (fact(n-1)*f);
    }
}
