//7. Write a function which takes a string as input from user and returns the length of that string without
//   using any string library functions. Call this function from mail function
#include<iostream>
using namespace std;
int len(char *s);
int main(){
    char str[100];
    cout<<"Enter the String = ";
    cin>>str;
    cout<<str<<endl;
    cout<<len(str);
}
int len(char *s){
    int i;
    for(i=0;s[i]!='\0';i++);
    return i;
}