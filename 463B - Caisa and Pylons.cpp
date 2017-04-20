#include <bits/stdc++.h>
using namespace std;

void solve(int A[],int n){
	int c = 0;
	int current = 0;
	for(int i=0;i<n;i++){
		if(A[i]-A[i+1] < 0){
			if(current < A[i+1]-A[i]){
				c += (A[i+1]-A[i]-current);
				current += (A[i+1]-A[i]-current);
			}
		}
		current += (A[i]-A[i+1]);
	}
	printf("%d\n",c);
}

int main(){

	int n;
	scanf("%d",&n);
	int A[n+1];
	A[0] = 0;
	for(int i=1;i<=n;i++)
		scanf("%d",&A[i]);

	solve(A,n);

	return 0;
}
