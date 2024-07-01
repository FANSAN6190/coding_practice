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
    fstream f1;
    string inp;
    f1.open("file.txt",ios::out);
    cout<<"Enter the first name = ";
    getline(cin,inp);
    f1<<inp;
    cout<<"Enter the last name = ";
    getline(cin,inp);
    f1<<inp<<endl;
    //cout<<f1.tellp();
    f1.close(); 

    fstream f2;
    f2.open("file.txt",ios::in);
    f2>>inp;
    cout<<inp;
    f2>>inp;
    cout<<inp;
    f2.close();

    fstream f3;
    f3.open("file.txt",ios::app);
    f3<<"hello";
    cout<<f2.tellg()<<endl;
    f3.seekp(8,ios::beg);
    f3<<" ";
    cout<<f3.tellp()<<endl;
    f3.close();

    fstream f4;
    f4.open("file.txt",ios::in);
    f4>>inp;
    cout<<inp;
    f4>>inp;
    cout<<inp;
    f4.close();
    return 0;
}