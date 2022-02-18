//7. Write a function which takes a string as input from user and returns the length of that string without
//   using any string library functions. Call this function from mail function.
#include<stdio.h>
int len(char *c);
void main(){
    char str[20];
    printf("Enter the String = ");
    scanf("%s",str);
    printf("Length of string = %d",len(str));
}
int len(char *c){
    int i=0;
    while(c[i]!='\0'){
        i++;
    }
    return i;
}
