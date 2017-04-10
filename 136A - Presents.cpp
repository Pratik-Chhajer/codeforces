#include <bits/stdc++.h>

using namespace std;

void solve(int n,int A[]){
	for(int i=0;i<n;i++)
		printf("%d ",A[i]);
}

int main(){

	int n,x;
	scanf("%d",&n);
	int A[n];
	for(int i=0;i<n;i++){
		scanf("%d",&x);
		A[x-1] = i+1;
	}
	solve(n,A);
	
	return 0;
}	
