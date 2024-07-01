/*    1. An automobile company has serial number for engine parts starting from AA0 to FF9. 
The other characteristics of parts to be specified in a structure are: Year of manufacturing, 
material (Steel, Aluminum, Iron etc.) and quantity manufactured.
Write a C++ program to include following tasks:
    (a) Specify a C structure that includes four members viz. serial numbers, year of 
        manufacturing, material type, and quantity. Declare an array of structure of size 60.
    (b) Automatically initialize the values of structure members as follows :
            i. Generate serial numbers such that first part has serial number AA0 and 60th part 
               has serial number FF9.
            ii. Randomly generate year of manufacturing in the range [1990-2018]
            iii. Randomly initialize material type from three choices ie. Steel, Aluminum, Iron
            iv. Randomly initialize quantity in the range [1-1000]
    (c) Display the information of the parts with serial numbers between any given range such 
        as [BB1,CC6].*/

#include<iostream>
using namespace std;
struct engine_parts
{
    int ser_num;
    int yo_man;
    string mtr;
    int qty;
}sar[60];
string snum(){
    char c1='A';
    char c2='A';
    for(char c1='A';c1<'G';c1++){
        for(char c2='A';c2<'G';c2++){
            for(int i=0;i<10;i++){
                cout<<c1<<c2<<i<<'\n';
            }
        }
    }
}
int main(){
        
}
