//8. Write a function strcat(s,t) which concatenates the string t to the end of string s. 
//Call this function from main function. 
#include<iostream>
#include<string.h>
using namespace std;
void Strcat(char s[],char t[]);
int main(){                                                                 
    char s[50],t[50];
    cout<<"Enter the String 1 = ";
    cin>>s;
    cout<<"Enter the String 2 = ";
    cin>>t;
    //cout<<"Concatenated String = "<<
    Strcat(s,t);
    return 0;
}
void Strcat(char ns[],char t[]){
    int i=0,k=0,l1,l2;
    l1=strlen(ns);
    l2=strlen(t);
    for(i=l1;i<l1+l2;i++,k++){
        ns[i]=t[k];
    }
    ns[i+1]='\0';
    cout<<"new String = "<<ns<<endl;
}