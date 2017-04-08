#include <bits/stdc++.h>

using namespace std;

void solve(int n){
	if(360%(180-n)==0){
		printf("YES\n");
	}
	else{
		printf("NO\n");
	}
}

int main(){
	int t,n;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		solve(n);
	}	
	return 0;
}
