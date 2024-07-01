#include<iostream>
using namespace std;
int search(char x);
void display(void);
void mark(char x,char y);
int checkforwin(char);
char ttt[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
char cfr[9];
class input{
    public:
    char p1;
    char p2;
};
int main(){
    input ip;
    char y;
    int player=1,t=8;
    display();
    while (t--)
    {
        if(player==1){
label1:     cout<<"Player X: Enter the Value = ";
            cin>>ip.p1;
            if(ip.p1>9 && search(ip.p1)!=-1){
                cfr[t]=ip.p1;
                mark(ip.p1,'X');
                player=2;
            }
            else{
                cout<<"Wrong Value Entered"<<endl;
                goto label1;
            }
            
        }
        else if(player==2){
label2:     cout<<"Player O: Enter the Value = ";
            cin>>ip.p2;
            if(ip.p1>9 && search(ip.p2)!=-1){
                cfr[t]=ip.p2;
                mark(ip.p2,'O');
                player=1;
            }
            else{
                cout<<"Wrong Value Entered"<<endl;
                goto label2;
            }
        }
        display();
        (player==2)?(y='X'):(y='O');
        if(checkforwin(y)==1){break;}
    }
    if(t==0){
        cout<<"!!!--DRAW--!!!"<<endl;
    }

    return 0;
}

void display(void){
        //cout<<"==========="<<endl;
        cout<<"-------------"<<endl;
        for(int i=0;i<3;i++){
            cout<<"| ";
            for(int j=0;j<3;j++){
                cout<<ttt[i][j]<<" | ";
            }
            cout<<endl;
            cout<<"-------------"<<endl;
        }
        //cout<<"==========="<<endl;
}

int search(char x){
    for(int i=0;i<9;i++){
        if(cfr[i]==x){
            return -1;
        }
    }
    return 0;
}

void mark(char x,char y){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(x==ttt[i][j]){
                ttt[i][j]=y;
            }
        }
    }
}

int checkforwin(char y){
    if((ttt[0][0]==ttt[0][1] && ttt[0][1]==ttt[0][2])||
       (ttt[0][0]==ttt[1][0] && ttt[1][0]==ttt[2][0])||
       (ttt[0][0]==ttt[1][1] && ttt[1][1]==ttt[2][2])||
       (ttt[0][1]==ttt[1][1] && ttt[1][1]==ttt[2][1])||
       (ttt[0][2]==ttt[1][2] && ttt[1][2]==ttt[2][2])||
       (ttt[0][2]==ttt[1][1] && ttt[1][1]==ttt[2][0])||
       (ttt[1][0]==ttt[1][1] && ttt[1][1]==ttt[1][2])||
       (ttt[2][0]==ttt[2][1] && ttt[2][1]==ttt[2][2]))
       {
           cout<<"*** "<<y<<" Wins***"<<endl;
           return 1;   
       }
    else{
        return 0;
    }
}
