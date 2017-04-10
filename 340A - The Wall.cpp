#include <bits/stdc++.h>
using namespace std;

long long int gcd(long long int a,long long int b){
	if(a%b==0)
		return b;
	return gcd(b,a%b);
}

int main(){

	long long int x,y,a,b;

	scanf("%lld %lld %lld %lld",&x,&y,&a,&b);

	long long int g = gcd(x,y);
	long long int p = x*y/g;

	long long int m = a/p;
	long long int n = b/p;
	
	

	if(m==0 && n==0){
		printf("0\n");
	}
	else{
	    if(a%p!=0)
	        m++;
	    
		printf("%lld\n", n-m+1);
	}

	return 0;
}
