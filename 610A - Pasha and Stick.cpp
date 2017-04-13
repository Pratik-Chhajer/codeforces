#include <bits/stdc++.h>
using namespace std;

void solve(long long int n){
    if(n%2==0){
    	if(n%4==0){
    	    printf("%lld\n",n/4-1);
    	}
    	else{
    	    printf("%lld\n",n/4);
    	}
    }
    else{
        printf("0\n");
    }
}

int main(){

	long long int x;
	scanf("%lld",&x);
	solve(x);

	return 0;
}
