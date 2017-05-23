#include <bits/stdc++.h>

using namespace std;

void solve(int A[],int n){
	sort(A,A+n);
	int current = A[n-1];
	long long int answer = current;
	for(int i=n-2;i>=0 && current>0;i--){
		if(A[i]>=current)
			A[i] = current - 1;
		current = A[i];
		answer += current;
	}
	printf("%lld\n",answer);
}

int main(){

	int n;
	scanf("%d",&n);
	int A[n];
	for(int i=0;i<n;i++)
		scanf("%d",&A[i]);
	solve(A,n);

	return 0;
}
