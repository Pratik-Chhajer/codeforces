#include <bits/stdc++.h>

int main(){

	int n;
	scanf("%d",&n);
	int A[n];
	for(int i=0;i<n;i++){
		scanf("%d",&A[i]);
	}
	int m;
	scanf("%d",&m);
	int x,y,temp;
	while(m--){
		scanf("%d %d",&x,&y);
		x--;
		temp = A[x] - y;
		A[x] = 0;
		if(x>=1){
			A[x-1] += y-1;
		}
		if(x<n-1){
			A[x+1] += temp;
		}
	}
	for(int i=0;i<n;i++){
		printf("%d\n",A[i]);
	}



	return 0;
}
