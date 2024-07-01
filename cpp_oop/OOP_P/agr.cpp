#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;
int main() {
	int n,N,T;
	if(n%2==0){n=n-1;}
	scanf("%d",&n);
	char nt[n];
	scanf("%s",nt);
	for(int i=0;nt[i]!='\0';i++){
		if(nt[i]=='T')
			T++;
		else
		    N++;
	}
	if(N>T)
	    printf("Nutan\n");
	else
	    printf("Tusla\n");
	return 0;
}