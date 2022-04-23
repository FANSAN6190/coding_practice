#include<iostream>
using namespace std;
class account{
    int acc_bal;
    public:
        account():acc_bal(0){}
        account(int a):acc_bal(a){
            if(a<0){
                cout<<"Inavalid Input\n";
                acc_bal=0;
            }
        }
        void credit(int a){
            acc_bal+=a;
        }
        void debit(int a){
            if(acc_bal<a){
                cout<<"Debit Amount Exceeded the account balance.\n";
            }
            else{
                acc_bal-=a;
            }
        }
        void getbalance(){
            cout<<acc_bal<<endl;
        }
};
int main(){
    account ba1,ba2;
    ba1.getbalance();
    ba2.getbalance();
    ba1.credit(1000);
    ba2.credit(2000);
    ba1.getbalance();
    ba2.getbalance();
    ba1.debit(500);
    ba2.debit(500);
    ba1.getbalance();
    ba2.getbalance();
}