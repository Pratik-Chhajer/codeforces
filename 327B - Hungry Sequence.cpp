#include <bits/stdc++.h>
using namespace std;
#define MAX 10000000

void seive(int n){
	bool Prime[MAX+1];
	memset(Prime,true,sizeof(Prime));
	Prime[0] = false;
	Prime[1] = false;
	for(int i=2;i*i<=MAX;i++){
		if(Prime[i]){
			for(int j=2;j*i<=MAX;j++){
				Prime[j*i] = false;
			}
		}
	}
	// Now Prime Contains all the prime as true
	// and non-prime as false
	int c = 0;
	int i = 0;
	while(c<n){
		if(Prime[i]){
			printf("%d ",i);
			c++;
		}
		i++;
	}
}

int main(){
	int n;
	scanf("%d",&n);
	seive(n);


	return 0;
}
