#include <bits/stdc++.h>

using namespace std;

void solve(long long int n,long long int m){
	long long int a = n/m;
	long long int b = n%m;
	long long int answer = (m-b)*a*(a-1)/2 + b*(a+1)*a/2;
	printf("%lld ",answer);
	answer = (n-m+1)*(n-m)/2;
	printf("%lld\n",answer);
}

int main(){
	long long int n,m;
	scanf("%lld %lld",&n,&m);
	solve(n,m);	
	return 0;
}
