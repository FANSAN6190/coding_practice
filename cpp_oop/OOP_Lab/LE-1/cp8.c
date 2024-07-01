//8. Write a function strcat(s,t) which concatenates the string t to the end of string s. 
//Call this function from main function. 
#include<stdio.h>
char strcat(char s,char t); 
int main(){
    char s[100],t[100];
    printf("Enter the String 1 = ");
    scanf("%s",s);
    printf("Enter the String 2 = ");
    scanf("%s",t);
    printf("Concatenated String = %s",strcat(s,t));
    return 0;
}
char strcat(char s,char t){
    return s+t;
}
