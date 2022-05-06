/*Q2. Write a C++ program to check if two strings S1 and S2 are rotations of each other.
For example all possible rotated strings of ”ABCD” are “BCDA”, “CDAB”, and “DABC”
Sample test case 1: Input: S1 = “ABCD” and S2 = “CDAB”
Output: TRUE
Sample test case 2: Input: S1 = “ABCD” and S2 = “ACBD”
Output: FALSE*/
#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char s1[50],s2[50];
    cin>>s1;
    cin>>s2;
    if(strlen(s1)!=strlen(s2)){
        cout<<"FALSE\n";
    }
    else{
        strcat(s1,s1);
        if(strstr(s1,s2)==0){
            cout<<"FALSE\n";
        }
        else{
            cout<<"TRUE\n";
        }
    }
    return 0;
}
