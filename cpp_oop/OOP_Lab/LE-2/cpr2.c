// 2. Write a program to generate random numbers in given range [m, n].
// Test case :
// Input: m=10, n=50
// Output:  34
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main () {
   int i,m,n;
   time_t t;
   printf("Enter the Range = ");
   scanf("%d %d",&m,&n);
   srand((unsigned)time(&t));
   for( i = m ; i < n ; i++ ) {
      printf("%d\n", rand() % n);
   }
}