/*2. Define a class to represent a bank account, including the following data members:
	Name of the depositor  
	Account number  
	Type of account 
	Balance amount in the account  
And member functions: 
	To assign initial values  
	To deposit an amount    
	To withdraw an amount after checking the balance   
	To display the name and balance 
Write a main program to test the program.*/
#include<iostream>
using namespace std;
class bk_acc{
	public:
		string depositor;
		string accnum;
		string acctype;
		int balance;
		bk_acc(){
			depositor="Fansan";
			accnum="2214 2478 9309";
			acctype="Saving";
			balance=0;
		}
		void deposit(int d){
			balance=balance+d;
		}
		void withdrawl(int w){
			if(balance-w>=0){
				balance=balance-w;
			}
			else{
				cout<<"Not Enough Amount\n";
			}
		}
		void display(){
			cout<<"Name: "<<depositor<<endl;
			cout<<"Ac/N: "<<accnum<<endl;
			cout<<"Account Type: "<<acctype<<endl;
			cout<<"Balance: "<<balance<<endl;
		}
};
int main(){
	bk_acc c1;
	c1.display();
	int op,am;
	cin>>op;
	while(op!=0){
		cin>>op;
		switch(op){
		case 1:
			cin>>am;
			c1.deposit(am);
			break;
		case 2:
			cin>>am;
			c1.withdrawl(am);
			break;
		case 3:
			c1.display();
			break;
		}
	}
	return 0;
}



