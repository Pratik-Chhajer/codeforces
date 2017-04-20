#include <bits/stdc++.h>
using namespace std;

void solve(long long int A[],int n){
	long long int answer = A[0];
	long long int current;
	for(int i=0;i<n;i++){
	    current = A[i];
	    if(current>answer) answer = current;
	    for(int j=i+1;j<n;j++){
	        current = current ^ A[j];
	        if(current>answer) answer = current;
	    }
	}
	printf("%lld",answer);
}

int main(){

	int n;
	scanf("%d",&n);
	long long int A[n];
	for(int i=0;i<n;i++)
		scanf("%lld",&A[i]);
	solve(A,n);

	return 0;
}
