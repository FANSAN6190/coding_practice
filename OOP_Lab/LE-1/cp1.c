//1. Write a program to find the number of digits in a given number.
#include<stdio.h>
void main(){
    long long int i,n;
    printf("Enter the Number = ");
    scanf("%lli",&n);
    for(i=0;n>0;i++,n/=10);
    printf("%d",i);
}
