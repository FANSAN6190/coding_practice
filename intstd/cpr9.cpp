#include<iostream>
#include<stdlib.h>
using namespace std;
#define max 10;
int siz=0;
struct stack{
    int items[10];
    int top;
};
struct stack st;
void ces(stack*s){
    s->top=-1;
}
int isful(stack*s){
    if(s->top==max-1){
        return 1;
    }
    else{
        return 0;
    }
}
int isempty(stack*s){
    if(s->top==-1){
        return 1;
    }
    else{
        return 0;
    }
}
void push(stack*s,int ni){
    if(isful(s)){
        cout<<"Stack Full";
    }
    else{
        s->top++;
        s->items[s->top]=ni;
    }
    siz++;
}
void pop(stack*s){
    if(isempty(s)){
        cout<<"\nStack Empty";
    }
    else{
        cout<<"Item Popped="<<s->items[s->top];
        s->top--;
    }
    siz--;
    cout<<endl;
}
void printstack(stack*s){
    cout<<"Stack:";
    for(int i=0;i<siz;i++){
        cout<<s->items[i]<<"";
    }
    cout<<endl;
}
int main(){
    int ch;
    stack*s;
    s=(stack*)malloc(sizeof(st));
    ces(s);
    push(s,1);
    push(s,2);
    push(s,3);
    push(s,4); 
    printstack(s);
    pop(s);
    cout<<"\nAfter Popping out\n";
    printstack(s);
}

