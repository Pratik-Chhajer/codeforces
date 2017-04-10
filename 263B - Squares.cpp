#include <bits/stdc++.h>

using namespace std;

void solve(int n,int k,int A[]){
	sort(A,A+n);
	if(k<=n){
		printf("%d %d\n",A[n-k],A[n-k]);
	}
	else{
		printf("-1\n");
	}
}

int main(){

	int n,k;
	scanf("%d %d",&n,&k);
	int A[n];
	for(int i=0;i<n;i++){
		scanf("%d",&A[i]);
	}

	solve(n,k,A);
	
	return 0;
}	
