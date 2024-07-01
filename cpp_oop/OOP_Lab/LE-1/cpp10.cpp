/*
2. Write the function strend(s,t), which returns 1 if the string t occurs at the end of the string s, 
and zero otherwise.
Sample Test case1:
Input:
 s=”Object Oriented Programming using C++”
 t=”Using C++”
Output: 1
Sample Test case2:
Input:
 s=”Object Oriented Programming using C++”
 t=”Programming”
Output: 0 */
#include<iostream>
#include<string.h>
using namespace std;
int strend(char s[], char t[]);
int main()
{

    char s[100],t[100];
    cout<<"Enter the the String, s = ";
    cin>>s;
    cout<<"Enter the String to be checked, t = ";
    cin>>t;
    cout<<"Output = "<<strend(s,t);

}
int strend(char s[], char t[]){
    char c[100];
    int l1,l2,k=0;
    l1=strlen(s);
    l2=strlen(t);
    for(int i=(l1-l2);(i<l1);i++,k++){
        c[k]=s[i];
    }
    c[k]='\0';
    if(strcmp(t,c)==0){
        return 1;
    }
    else{
        return 0;
    }
}
