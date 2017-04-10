#include <bits/stdc++.h>

using namespace std;

void solve(long long int n){
	long long int answer;
	if(n%3==0){
		answer = 2*n/3;
	}
	else{
		answer = 2*(n-n%3)/3 + 1;
	}
	printf("%lld\n", answer);
}

int main(){

	long long int n;
	scanf("%lld",&n);

	solve(n);
	
	return 0;
}
