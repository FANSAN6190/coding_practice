/* 1. Write a C++ program to find the highest occurring digit in prime numbers in a given range.
   Given a range L to R, the task is to find the highest occurring digit in prime numbers lie between L 
   and R (both inclusive). If multiple digits have same highest frequency print the largest of them. 
   If no prime number occurs between L and R, output -1.
   Examples:
   Input : L = 1 and R = 20.
   Output : 1
   Prime number between 1 and 20 are 2, 3, 5, 7, 11, 13, 17, 19.
   1 occur maximum i.e 5 times among 0 to 9.*/
#include<stdio.h>
static int nf[10];
int frq(int n){
   static int n0=0,n1=0,n2=0,n3=0,n4=0,n5=0,n6=0,n7=0,n8=0,n9=0;
   for(int i=0;n>0;i++){
      int rm=n%10;
      n=n/10;
      rm==0?nf[0]++:(rm==1?nf[1]++:(rm==2?nf[2]++:(rm==3?nf[3]++:(rm==4?nf[4]++:(rm==5?nf[5]++:(rm==6?nf[6]++:(rm==7?nf[7]++:(rm==8?nf[8]++:(rm==9?nf[9]++:n9)))))))));
   }
}
int main(){
   int l,r,ele,max=0;
   nf[10]=0;
   printf("Enter the Range from L = ");
   scanf("%d",&l);
   printf("To = ");
   scanf("%d",&r);
   for(int i=l+1;i<r;i++){
      int d=0;
      for(int j=1;j<r;j++){
         if(i%j==0)
            d++;
      }
      if(d<=2){
         frq(i);
      }
   }
   for(int i=0;i<10;i++){
      if(nf[i]>=max){
         max=nf[i];
         ele=i;
      }
   }
   printf("%d",ele);
   return 0;
}
