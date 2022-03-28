#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t,A,B,C,D,a,b,r=-1;
	cin>>t;
	while(t--){
	    cin>>A>>B>>C>>D;
	    for(a=1;a<=10000;a++){
	        for(b=1;b<=10000;b++){
	            if(a+b==A||a-b==A||a*b==A||a/b==A){
	                if(a+b==B||a-b==B||a*b==B||a/b==B){
	                    if(a+b==C||a-b==C||a*b==C||a/b==C){
	                        if(a+b==D||a-b==D||a*b==D||a/b==D){
	                            r=0;
	                            break;
	                        }
	                    }
	                    if(r==0){break;}
	                }
	                if(r==0){break;}
	            }
	            if(r==0){break;}
	        }
	        if(r==0){break;}
	    }
	    if(r==-1){
	        cout<<-1<<" "<<-1<<endl;
	    }
	    else{
	        cout<<a<<" "<<b<<endl;
	    }
	    
	}
	return 0;
}
