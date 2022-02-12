#include<iostream>
using namespace std;
int main(){
    system("");
    string food ="Pizza";
    string from ="Pasta";
    string *ptr=&food;
    cout<<food<<"\n";
    cout<<&food<<"\n";
    ptr=&from;
    cout<<ptr<<"\n";
    cout<<*ptr<<"\n";
    printf("hello");
    return 0;
}