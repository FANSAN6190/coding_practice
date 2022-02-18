//Write a function strcat(s,t) which concatenates the string t to the end of string s. 
//Call this function from main function. 
#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char s[100],t[100];
    cout<<"Enter the String 1 = ";
    cin>>s;
    cout<<"Enter the String 2 = ";
    cin>>t;
    cout<<"Concatenated String = "<<strcat(s,t);
    return 0;
}
char strcat(char s,char t){
    return s+t;
}