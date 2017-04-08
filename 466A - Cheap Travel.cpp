#include <bits/stdc++.h>

using namespace std;

int solve(int n,int m,int a,int b){
	int answer = 0;
	int required = n;
	if(m>=n){
		if(b>n*a){
			return n*a;
		}
		else{
			return b;
		}
	}
	else{
		if(b>m*a){
			return n*a;
		}
		else{
			if(n%m==0){
				return b*n/m;
			}
			else{
				int rem = n%m;
				return (n/m)*b + min(rem*a , b);
			}
		}
	}
}

int main(){

	int n,m,a,b;
	scanf("%d %d %d %d",&n,&m,&a,&b);
	printf("%d\n",solve(n,m,a,b));

	return 0;
}
