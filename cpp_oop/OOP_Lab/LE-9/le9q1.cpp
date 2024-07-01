/*    1. Write a program that creates a text file “TEXT.txt”on the disk. Write text on this file. 
    Read this file and  display the following information on the screen in two columns:
    • Number of lines
    • Number of words
    • Number of characters
Strings should be left-justified and numbers should be right-justified in a suitable field width.
Also handle the error by displaying suitable error message. */
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    int lc=0;
    int w=0,i,ch=0;
    string l;
    fstream f1;
    f1.open("file.txt",ios::in);
    while (getline(f1,l))
    {
        lc++;
        ch++;
        if(l[0]!=' '){w++;}       
        for(i=0;l[i]!='\0';i++){
            ch++;
            if(l[i]==' ' && l[i+1]!=' '){
                w++;
            }

        }
        if(l[i-1]==' '){w--;}

    }
    cout<<lc<<endl;
    cout<<w<<endl;
    cout<<ch<<endl;    
    f1.close();
    return 0;
}