#include<iostream>
using namespace std;
class stack{
    int container[5];
    int top=-1;
    public:
    stack(){
        for(int i=0;i<5;i++){container[i]=0;}
    }
    
    bool isfull(){
        if(top==4){
            return true;
        }
        else{
            return false;
        }
    }
    bool isempty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }
    void push(int num){
        if(isfull()==true){
            cout<<"Stak Overflow";
        }
        else{
            top++;
            container[top]=num;
        }
    }
    int pop(){
        if(isempty()==true){
            cout<<"Stack Underflow";
        }
        else
        {
            int popnum=container[top];
            container[top]=0;
            top--;
            return popnum;
        }
        
    }
    int peek(){
        if(isempty()==true){
            cout<<"Stack Underflow";
        }
        else{
            return container[top];
        }
    }
    void update(int in,int num){
        container[in]=num;
    }
    void display(){
        cout<<"these are the items in stack-"<<endl;
        for(int i=0;i<5;i++){
            cout<<container[i]<<endl;
        }
    }  
};
int main(){
    stack st;
    int in,choice=0,num;
    while(choice!=8){
        cout<<"Select one of the following-"<<endl;
        cout<<"1. display"<<endl;
        cout<<"2. push"<<endl;
        cout<<"3. pop"<<endl;
        cout<<"4. isfull"<<endl;
        cout<<"5. isempty"<<endl;
        cout<<"6. peek"<<endl;
        cout<<"7. update"<<endl;
        cout<<"8. exit"<<endl;
        cin>>choice;
        switch (choice)
        {
        case 1:
            st.display();
            break;
        case 2:
            cout<<"Enter the Number to Push = ";
            cin>>num;
            st.push(num);
            break;
        case 3:
            st.pop();
            break;
        case 4:
            if(st.isfull()==true){
                cout<<"stack is Full";
            }
            else{
                cout<<"Stack is not Full";
            }
            break;
        case 5:
            if(st.isempty()==true){
                cout<<"Stack is Empty";
            }
            else{
                cout<<"Stack is not Empty";
            }
            break;
        case 6:
            cout<<st.peek();
            break;
        case 7:
            cout<<"Enter thee Index = ";
            cin>>in;
            cout<<"Enter the Number = ";
            cin>>num;
            st.update(in,num);
            break;
        case 8:
            system("exit");
            break;
        default:
            cout<<"you have chosen wrong option";
            break;
        }
    }
}