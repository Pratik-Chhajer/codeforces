#include <bits/stdc++.h>
using namespace std;

bool solve(long long int a,long long int b,long long int c){
	if(a==b)
		return true;
	if(b-a>0 && c>0 && (b-a)%c==0)
		return true;
	else if(b-a<0 && c<0 && (a-b)%c==0)
		return true;
	return false;
}

int main(){

	long long int a,b,c;
	scanf("%lld %lld %lld",&a,&b,&c);

	if(solve(a,b,c))
		printf("%s\n","YES");
	else
		printf("%s\n","NO");
	
	return 0;
}
