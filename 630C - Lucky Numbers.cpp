#include <bits/stdc++.h>
using namespace std;

void solve(long long int n){
	long long unsigned int p = 1;
	for(int i=0;i<=n;i++){
		p = p<<1;
	}
	cout<<p-2<<endl;
}

int main(){

	long long int x;
	scanf("%lld",&x);
	solve(x);

	return 0;
}
