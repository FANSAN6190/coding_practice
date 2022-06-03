/* Write a program to show that, the constructor and destructor functions of a globally declared 
object are the first and last functions, respectively to be called in a program.*/
#include<iostream>
using namespace std;
class A{
    int n;
    public:
        A(int a){
            n=a;
            cout<<"First "<<n<<"\n";
        }
        ~A(){
            cout<<"Last "<<n<<"\n";
            
        }
}ob1(1);
int main(){
    A ob2(2);
    return 0;  
}
