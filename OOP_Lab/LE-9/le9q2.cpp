/*Write a program to read the file and store the lines into an array. 
Also handle the error by displaying suitable error message.*/
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    fstream f1;
    string l,strarr[10];
    f1.open("file.txt",ios::in);
    for(int i=0;getline(f1,l);i++){
        strarr[i]=l;
    }
    for(int i=0;strarr[i]!="";i++){
        cout<<strarr[i]<<endl;
    }
}