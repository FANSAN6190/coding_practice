#include <iostream>
using namespace std;
int mp(int s);
int main() {
	// your code goes here
	int t,s,x,y;
	cin>>t;
	while(t--){
	    scanf("%d",&s);
	    printf("%d\n",mp(s));
	}
	return 0;
}
int mp(int s){
    int m=INT32_MIN;
    for(int x=1;x<5;x++){
	        for(int y=1;y<5;y++){
	            if(s==x+(-y) && m<x*(-y)){
	               m=x*(-y);
	               return m;
	            }                       
	        }
    }
    return 0;
}
