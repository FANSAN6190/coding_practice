/* Write a program to show that, the constructor and destructor functions of a globally declared 
object are the first and last functions, respectively to be called in a program.*/
#include<iostream>
using namespace std;
int n=0;
class A{
    
    public:
        A(int a){
            n=a;
            cout<<"First "<<n<<"\n";
        }
        ~A(){
            cout<<"Last "<<n<<"\n";
            
        }
}a(1);
int main(){
    A b(2);
    return 0;  
}
