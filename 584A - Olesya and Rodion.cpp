#include <bits/stdc++.h>

using namespace std;

void solve(int n,int t){
	if(n==1 && t==10){
		printf("-1\n");
	}
	else{
		if(t!=10){
			printf("%d",t);
			for(int i=0;i<n-1;i++) printf("0");
			printf("\n");
		}
		else{
			printf("%d",1);
			for(int i=0;i<n-1;i++) printf("0");
			printf("\n");	
		}
	}
}

int main(){
	int n,t;
	scanf("%d %d",&n,&t);
	solve(n,t);	
	return 0;
}
