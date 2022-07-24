//3. Write a program to print �Hello JUET!� without main() function.
#include<stdio.h>
#define phello main
void phello(void){
    printf("Hello JUET! %d",-__INT_MAX__);
}


