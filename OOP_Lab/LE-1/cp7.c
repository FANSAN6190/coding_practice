//7. Write a function which takes a string as input from user and returns the length of that string without
//   using any string library functions. Call this function from mail function.
#include<stdio.h>
int len(char s);
void main(){
    char str[20];
    char *c;
    printf("Enter the String = ");
    scanf("%s",str);
    c=str;
    printf("Length of string = ",len(c));
}
int len(char &c){
    int s=0;
    while(*c!='\0'){
        c++;
        s++;
    }
    return s;
}
