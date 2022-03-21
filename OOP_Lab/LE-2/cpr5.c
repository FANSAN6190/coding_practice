/*1. Write a C++ program to find the highest occurring digit in prime numbers in a given range.
   Given a range L to R, the task is to find the highest occurring digit in prime numbers lie between L 
   and R (both inclusive). If multiple digits have same highest frequency print the largest of them. 
   If no prime number occurs between L and R, output -1.
   Examples:
   Input : L = 1 and R = 20.
   Output : 1
   Prime number between 1 and 20 are 2, 3, 5, 7, 11, 13, 17, 19.
   1 occur maximum i.e 5 times among 0 to 9.*/
#include<stdio.h>
#include<stdbool.h>
bool prim(int x);
void main(){
   int l,r;
   printf("Enter the Range from L = ");
   scanf("%d",&l);
   printf("To R = ");
   scanf("%d",&r);
   char apr[r-l];
   for(int i=l,j=0;i<r;i++){
      if(prim(i)==true){
         printf("%d ",i);
         apr[j]=i;
         j++;
      }
   }
   for(int i=0;i<(r-l);i++){
      printf("\n%c",apr[i]);
   }

}
bool prim(int x){
   if(x==1){
      return false;
   }
   int d=0;
   for(int i=2;i<x;i++){
      if(x%i==0){
         d++;
      }
   }
   if(d==0){
      return true;
   }
   else{
      return false;
   }
}
