#include <bits/stdc++.h>
using namespace std;

int main(){

	int n,m;
	scanf("%d %d",&n,&m);

	int x = n;
	int y = m;

	m = min(x,y);
	n = max(x,y);

	if(n>2*m){
		n = 2*m;
	}

	printf("%d\n",(m+n)/3);

	return 0;
}
