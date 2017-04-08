#include <bits/stdc++.h>

using namespace std;

void solve(int n){
	int c = 1;
	for(int i=1;i*i<=n;i++){
		if(n%i==0) c= i;
	}
	printf("%d %d\n",c,n/c);
}

int main(){

	int n;
	scanf("%d",&n);
	solve(n);
		
	return 0;
}
