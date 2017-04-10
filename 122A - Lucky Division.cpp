#include <bits/stdc++.h>

using namespace std;

void solve(int n){
	int A[] = {4,7,44,47,74,77,444,447,474,477,744,747,774,777};
	int size = 14;
	bool result = false;
	for(int i=0;i<size;i++){
		if(n%A[i]==0){
			result = true;
			break;
		}
	}
	if(result){
		printf("YES\n");
	}
	else{
		printf("NO\n");
	}
}

int main(){

	int n;
	scanf("%d",&n);
	solve(n);
	
	return 0;
}	
