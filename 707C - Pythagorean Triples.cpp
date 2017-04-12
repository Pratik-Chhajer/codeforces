#include <bits/stdc++.h>
using namespace std;

void solve(long long int n){
	if(n&1){
		// odd
		if(n==1){
			printf("-1\n");
			return;
		}
		else{
			printf("%lld %lld\n", ((n*n-1)/2) , ((n*n+1)/2) );
			return;
		}
	}
	else{
		// even
		if(n<=2){
			printf("-1\n");
			return;
		}
		else{
			printf("%lld %lld\n", n*n/4-1,n*n/4+1);
			return;
		}
	}
}

int main(){

	long long int x;
	scanf("%lld",&x);
	solve(x);

	return 0;
}
