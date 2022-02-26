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
using namespace std;
int strend(char s[100], char t[100]);
int main(){
    char s[100],t[100];
    cout<<"Enter the String = ";
    cin>>s;
    cout<<"Enter the end String = ";
    cin>>t;
    strend(s,t);
}
int strend(char s[100], char t[100]){
    for(int i=0;i<100;i++){
        if(t)
    }
}